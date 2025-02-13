#include "../inc/lcd.h"

// Simulação de função para limpar o LCD
void LCD_Clear() {
    printf("LCD limpo\n");
}

// Simulação de função para imprimir no LCD
void LCD_Print(const char* mensagem) {
    printf("LCD: %s\n", mensagem);
}

// Simulação de função para definir a cor do LED
void LED_SetColor(int cor) {
    switch (cor) {
        case LCD_LED_GREEN:
            printf("LED Verde ativado\n");
            break;
        case LCD_LED_YELLOW:
            printf("LED Amarelo ativado\n");
            break;
        case LCD_LED_RED:
            printf("LED Vermelho ativado\n");
            break;
        default:
            printf("Cor inválida\n");
    }
}

// Atualiza a interface do LCD com base no nível de ruído
void atualizarInterface(float nivelSonoro) {
    LCD_Clear();
    if (nivelSonoro < 50) {
        LCD_Print("Nivel Baixo");
        LED_SetColor(LCD_LED_GREEN);
    } else if (nivelSonoro < 80) {
        LCD_Print("Nivel Médio");
        LED_SetColor(LCD_LED_YELLOW);
    } else {
        LCD_Print("Nivel Alto!");
        LED_SetColor(LCD_LED_RED);
    }
}
