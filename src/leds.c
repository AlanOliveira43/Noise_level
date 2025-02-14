#include "../inc/leds.h"
#include <stdio.h>

// Em uma implementação real, as funções abaixo configurariam os pinos.
// Aqui, usamos printf para simulação.

void LED_Init(void) {
    // Inicialização dos LEDs.
    printf("[LED] Inicializados.\n");
}

void LED_SetColor(LED_Color color) {
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