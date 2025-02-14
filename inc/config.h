#ifndef CONFIG_H
#define CONFIG_H

// Canal ADC utilizado para o microfone
#define MIC_CHANNEL 0

// Valores de calibração e conversão (exemplo)
#define ADC_MAX 4095.0
#define SOUND_SCALE_FACTOR 100.0  // Escala para converter ADC em “nível sonoro”

// Limiares para indicação visual (em "nível sonoro")
#define LIMIAR_VERDE 70.0   // Nível aceitável (em dB)
#define LIMIAR_AMARELO 85.0 // Nível de atenção (uso de protetores auriculares)
#define LIMIAR_VERMELHO 100.0 // Nível crítico (ação obrigatória)

// Configurações para Wi-Fi
#define WIFI_SSID       "YOUR_WIFI_SSID"         // Substitua pelo seu SSID
#define WIFI_PASSWORD   "YOUR_WIFI_PASSWORD"     // Substitua pela sua senha
#define WIFI_SUCCESS    0                        // Valor indicando sucesso na conexão

// Configurações para envio via HTTP (ThingSpeak)
#define THINGSPEAK_API_KEY "YOUR_API_KEY"       // Substitua pela sua chave
#define THINGSPEAK_URL "http://api.thingspeak.com/update"

// Intervalos de temporização (em milissegundos)
#define TIMER_INTERVAL_MS 1000       // Intervalo para atualização do sistema (1 segundo)
#define HTTP_SEND_INTERVAL_MS 5000   // Intervalo para envio dos dados (5 segundos)

#endif // CONFIG_H
