#ifndef JOYSTICK_H
#define JOYSTICK_H

// Definições para as direções do joystick
#define JOYSTICK_UP 1
#define JOYSTICK_DOWN 2
#define JOYSTICK_BTN1 3
#define JOYSTICK_BTN2 4

// Declarações das funções
int Joystick_GetDirection();
int Botao_IsPressed(int botao); // Use JOYSTICK_BTN1 e JOYSTICK_BTN2
void processarEntradaUsuario();

// Implementação da função processarEntradaUsuario
void processarEntradaUsuario() {
    // Exemplo: Usar o joystick para navegar por opções de menu
    int direcao = Joystick_GetDirection();
    switch(direcao) {
        case JOYSTICK_UP:
            // Navegar para cima no menu
            break;
        case JOYSTICK_DOWN:
            // Navegar para baixo no menu
            break;
        // Outros casos conforme a implementação...
    }
    
    // Botões para confirmação e alteração de parâmetros
    if (Botao_IsPressed(JOYSTICK_BTN1)) {
        // Exemplo: Ajusta o limiar de alerta ou seleciona uma opção
    }
    if (Botao_IsPressed(JOYSTICK_BTN2)) {
        // Exemplo: Volta ao menu principal ou reseta a configuração
    }
}

#endif // JOYSTICK_H