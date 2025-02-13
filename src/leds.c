#include "../inc/leds.h"
#include <stdio.h>

// Em uma implementação real, as funções abaixo configurariam os pinos.
// Aqui, usamos printf para simulação.

void LED_Init(void) {
    // Inicialização dos LEDs.
    printf("[LED] Inicializados.\n");
}

void LED_SetColor(LED_Color color) {
    // Em um sistema real, você acionaria os pinos correspondentes.
    // Neste exemplo, apenas exibimos o status via console.
    switch (color) {
        case LED_OFF:
            printf("[LED] Desligado.\n");
            break;
        case LED_GREEN:
            printf("[LED] Cor: VERDE.\n");
            break;
        case LED_YELLOW:
            printf("[LED] Cor: AMARELO.\n");
            break;
        case LED_RED:
            printf("[LED] Cor: VERMELHO.\n");
            break;
        default:
            break;
    }
}
