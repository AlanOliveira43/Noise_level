#ifndef CALIBRACAO_H
#define CALIBRACAO_H

/**
 * Converte o valor lido pelo ADC em um índice de nível sonoro.
 * @param adc_value Valor lido pelo ADC.
 * @return Valor convertido para uma escala definida.
 */
float converterADCparaNivel(unsigned int adc_value);

#endif // CALIBRACAO_H
