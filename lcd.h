#include "lcd.h"
#include "leds.h"
#include <stdio.h>

#define LIMIAR_NORMAL 50.0   // Valor de referência para o nível de ruído
#define LIMIAR_ALERTA  70.0

void atualizarInterface(float nivelSonoro) {
    char mensagem[32];
    sprintf(mensagem, "Ruido: %.1f", nivelSonoro);
    LCD_Clear();
    LCD_Print(mensagem);

    // Controle dos LEDs baseado no nível sonoro
    if (nivelSonoro < LIMIAR_NORMAL) {
        LED_SetColor(GREEN);   // Ruído aceitável
    } else if (nivelSonoro < LIMIAR_ALERTA) {
        LED_SetColor(YELLOW);  // Ruído próximo ao limite
    } else {
        LED_SetColor(RED);     // Ruído acima do limite
    }
}
