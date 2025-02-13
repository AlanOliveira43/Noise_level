#include "../inc/http_client.h"
#include <stdio.h>

// Esta é uma simulação. Em um ambiente real, você utilizaria o módulo Wi-Fi e a pilha TCP/IP.
int HTTP_Post(const char* url, const char* payload) {
    printf("[HTTP] POST para URL: %s\n", url);
    printf("[HTTP] Payload: %s\n", payload);
    // Simula sucesso na operação.
    return 0;
}

// Função para verificar o nível sonoro e enviar um alerta, se necessário.
void verificarNivelSonoro(float nivelSonoro) {
    #define LIMIAR_VERMELHO 70.0  // Defina um valor adequado ou garanta que está em config.h

    if (nivelSonoro >= LIMIAR_VERMELHO) {
        HTTP_Post("http://sistema-industrial.com/alerta", "Alerta! Ruído crítico detectado!");
    }
}
