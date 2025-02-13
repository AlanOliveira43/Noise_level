#include "../inc/temporizador.h"
#include <time.h>
#include <unistd.h>  // usleep
#include <stdio.h>

static uint32_t tickStart;

void Temporizador_Init(void) {
    // Usa clock() para simular a inicialização do temporizador.
    tickStart = (uint32_t)clock();
    printf("[Temporizador] Inicializado.\n");
}

uint32_t Temporizador_GetTick(void) {
    // Retorna o tempo decorrido em milissegundos.
    return (uint32_t)(((clock() - tickStart) * 1000) / CLOCKS_PER_SEC);
}

void Temporizador_Delay(uint32_t ms) {
    // Usa usleep para simular delay.
    usleep(ms * 1000);
}
