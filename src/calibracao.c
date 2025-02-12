#include "calibracao.h"
#include "config.h"

float converterADCparaNivel(unsigned int adc_value) {
    // Exemplo simples de conversão:
    // Mapeia o valor ADC (0 a ADC_MAX) para uma escala de 0 a SOUND_SCALE_FACTOR.
    return ((float)adc_value / ADC_MAX) * SOUND_SCALE_FACTOR;
}
