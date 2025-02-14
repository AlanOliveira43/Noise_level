#include "../inc/lcd.h"
#include "../inc/leds.h"   // Para usar LED_SetColor e as constantes dos LEDs
#include <stdio.h>  // Necessário para printf

// Simulação de função para limpar o LCD
void LCD_Clear(void) {
    printf("[LCD] Limpo\n");
}

// Simulação de função para imprimir no LCD
void LCD_Print(const char* mensagem) {
    printf("[LCD] %s\n", mensagem);
}

// Atualiza a interface do LCD com base no nível de ruído
void atualizarInterface(float nivelSonoro) {
    LCD_Clear();
    if (nivelSonoro < 50) {
        LCD_Print("Nivel Baixo");
        LED_SetColor(LED_GREEN);
    } else if (nivelSonoro < 80) {
        LCD_Print("Nivel Medio");
        LED_SetColor(LED_YELLOW);
    } else {
        LCD_Print("Nivel Alto!");
        LED_SetColor(LED_RED);
    }
}
