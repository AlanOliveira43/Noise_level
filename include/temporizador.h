#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H

#include <stdint.h>

/**
 * Inicializa o temporizador.
 */
void Temporizador_Init(void);

/**
 * Retorna o tempo decorrido desde a inicialização (em milissegundos).
 * @return Tempo decorrido em ms.
 */
uint32_t Temporizador_GetTick(void);

/**
 * Aguarda (delay) por um determinado período (em milissegundos).
 * @param ms Milissegundos a aguardar.
 */
void Temporizador_Delay(uint32_t ms);

#endif // TEMPORIZADOR_H
