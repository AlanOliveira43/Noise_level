#include "../inc/lcd.h"
#include "../inc/leds.h"  // Adicionando esta linha para incluir a enum LED_Color
#include <stdio.h>

// Simulação de função para limpar o LCD
void LCD_Clear() {
    printf("[LCD] Limpo\n");
}

// Simulação de função para imprimir no LCD
void LCD_Print(const char* mensagem) {
    printf("[LCD] %s\n", mensagem);
}

// Simulação de função para definir a cor do LED
void LED_SetColor(LED_Color color) {  // Certifique-se de que LED_Color está definido no leds.h
    switch (color) {
        case LED_GREEN:
            printf("[LED] Verde ativado\n");
            break;
        case LED_YELLOW:
            printf("[LED] Amarelo ativado\n");
            break;
        case LED_RED:
            printf("[LED] Vermelho ativado\n");
            break;
        default:
            printf("[LED] Cor inválida\n");
            break;
    }
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
