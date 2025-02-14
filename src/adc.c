#include "../inc/adc.h"
#include "pico/stdlib.h"
#include "hardware/adc.h"

// Inicializa o ADC do RP2040
void ADC_Init() {
    adc_init();  // Inicializa o periférico ADC
}

// Lê um valor de um canal específico do ADC
uint16_t ADC_ReadChannel(uint8_t channel) {
    adc_select_input(channel);  // Seleciona o canal do ADC
    return adc_read();  // Retorna o valor lido (0 - 4095 para 12 bits)
}
