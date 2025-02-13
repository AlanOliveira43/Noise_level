#ifndef NOISE_LEVEL_LEDS_H
#define NOISE_LEVEL_LEDS_H

#include <stdio.h>  // Se necessário para declarações (pode ser removido se não for preciso)

// Enumeração para cores dos LEDs.
typedef enum {
    LED_OFF,
    LED_GREEN,
    LED_YELLOW,
    LED_RED
} LED_Color;

/**
 * Inicializa o hardware dos LEDs.
 */
void LED_Init(void);

/**
 * Define a cor do LED (ou LED RGB) de acordo com o estado.
 * @param color Cor desejada (LED_OFF, LED_GREEN, LED_YELLOW, LED_RED).
 */
void LED_SetColor(LED_Color color);

#endif // NOISE_LEVEL_LEDS_H
