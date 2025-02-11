#ifndef CONFIG_H
#define CONFIG_H

// Canal ADC utilizado para o microfone
#define MIC_CHANNEL 0

// Valores de calibração e conversão (exemplo)
#define ADC_MAX 4095.0
#define SOUND_SCALE_FACTOR 100.0  // Escala para converter ADC em “nível sonoro”

// Limiares para indicação visual (em "nível sonoro")
#define LIMIAR_NORMAL 50.0
#define LIMIAR_ALERTA 70.0

// Configurações para envio via HTTP (ThingSpeak)
#define THINGSPEAK_API_KEY "YOUR_API_KEY"       // Substitua pela sua chave
#define THINGSPEAK_URL "http://api.thingspeak.com/update"

// Intervalos de temporização (em milissegundos)
#define TIMER_INTERVAL_MS 1000       // Intervalo para atualização do sistema (1 segundo)
#define HTTP_SEND_INTERVAL_MS 5000   // Intervalo para envio dos dados (5 segundos)

#endif // CONFIG_H
