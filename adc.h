#include "adc.h"
#include "calibracao.h"

#define MIC_CHANNEL 0  // Canal ADC conectado ao microfone

float lerNivelSonoro() {
    uint16_t valor_adc = ADC_ReadChannel(MIC_CHANNEL);
    // Converter o valor ADC para um índice de ruído (ex.: uma escala arbitrária)
    float nivelSonoro = converterADCparaNivel(valor_adc);
    return nivelSonoro;
}
