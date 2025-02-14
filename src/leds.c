#include "../inc/leds.h"  // Utilize o caminho correto conforme a estrutura do projeto
#include <stdio.h> // Necessário para usar printf

void LED_Init(void) {
    // Inicialização dos LEDs (simulação ou implementação real)
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
