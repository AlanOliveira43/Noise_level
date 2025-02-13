/* main.c
 * Arquivo principal do projeto.
 * Responsável por inicializar os módulos e integrar as funcionalidades:
 * - Aquisição do sinal do microfone (via ADC)
 * - Atualização da interface local (tela e LEDs)
 * - Processamento de entradas (joystick e botões)
 * - Controle de temporização
 * - Envio dos dados para a nuvem (ThingSpeak) via Wi-Fi
 */

 #include <stdio.h>
 #include "../inc/config.h"          // Definições gerais e constantes (ex.: pinos, limiares, SSID, senha, etc.)
 #include "../inc/calibracao.h"      // Funções para converter o valor ADC em nível sonoro
 #include "../inc/lcd.h"             // Funções para controle do display LCD
 #include "../inc/leds.h"            // Funções para controle dos LEDs (ou LED RGB)
 #include "../inc/joystick.h"        // Funções para leitura do joystick
 #include "../inc/botoes.h"         // Funções para leitura dos botões
 #include "../inc/wifi.h"            // Funções para configuração e conexão Wi-Fi
 #include "../inc/http_client.h"     // Funções para envio de requisições HTTP
 #include "../inc/temporizador.h"    // Funções para controle de temporizadores
 #include "../inc/delay.h"           // Função de delay (pode ser implementada conforme a plataforma)
 
 // Protótipos das funções de integração com a interface e comunicação
 extern float lerNivelSonoro(void);           // Lê e converte o sinal do microfone
 extern void atualizarInterface(float nivel);   // Atualiza o display e LEDs conforme o nível sonoro
 extern void processarEntradaUsuario(void);     // Processa as entradas do joystick e botões
 extern void enviarDadosParaNuvem(float nivel);   // Envia os dados para a nuvem (ThingSpeak)
 
 int main(void) {
     /* Inicialização dos módulos */
     ADC_Init();              // Inicializa o ADC para leitura do microfone
     LCD_Init();              // Inicializa o display LCD
     LED_Init();              // Inicializa os LEDs
     Joystick_Init();         // Inicializa o joystick
     Botoes_Init();           // Inicializa os botões
     Wifi_Init();             // Inicializa o módulo Wi-Fi
     HTTP_Client_Init();      // Inicializa o cliente HTTP (caso necessário)
     Temporizador_Init();     // Configura os temporizadores para marcação dos eventos
 
     /* Conexão Wi-Fi */
     if (Wifi_Connect(WIFI_SSID, WIFI_PASSWORD) != WIFI_SUCCESS) {
         LCD_Clear();
         LCD_Print("Erro Wi-Fi!");
         // Se a conexão falhar, pode-se optar por tentar novamente ou entrar em modo offline
     } else {
         LCD_Clear();
         LCD_Print("Wi-Fi Conectado!");
     }
 
     // Exibe mensagem de início do sistema
     delay_ms(2000);
     LCD_Clear();
     LCD_Print("Sistema Iniciado");
 
     /* Loop principal */
     while (1) {
         // 1. Aquisição do nível sonoro via microfone
         float nivelSonoro = lerNivelSonoro();
 
         // 2. Atualização da interface local
         atualizarInterface(nivelSonoro);
 
         // 3. Processamento das entradas do usuário (joystick e botões)
         processarEntradaUsuario();
 
         // 4. Verificação do temporizador para envio dos dados para a nuvem
         if (Temporizador_VerificarEnvio()) {
             enviarDadosParaNuvem(nivelSonoro);
             // Reinicia o contador do temporizador ou limpa a flag de envio
             Temporizador_ResetEnvio();
         }
 
         // 5. Pequena espera para evitar loop excessivamente rápido (pode ser ajustada conforme a necessidade)
         delay_ms(100);
     }
     if (nivelSonoro < LIMIAR_VERDE) {
        LCD_Print("Ruido OK (Verde)");
    } else if (nivelSonoro < LIMIAR_AMARELO) {
        LCD_Print("Atenção! Use proteção.");
    } else {
        LCD_Print("Perigo! Ruído excessivo!");
    }
    
 
     return 0; // Nunca alcançado
 }
 