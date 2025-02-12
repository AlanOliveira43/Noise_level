#include "wifi.h"
#include "http_client.h"

void enviarDadosParaNuvem(float nivelSonoro) {
    char payload[128];
    // Monta a string com a API Key e o campo de dados do ThingSpeak
    sprintf(payload, "api_key=YOUR_THINGSPEAK_API_KEY&field1=%.1f", nivelSonoro);
    
    // Envia a requisição HTTP POST para o ThingSpeak
    HTTP_Post("http://api.thingspeak.com/update", payload);
}
