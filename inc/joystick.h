#ifndef JOYSTICK_H
#define JOYSTICK_H

// Definições para as direções do joystick
#define UP 1
#define DOWN 2
#define BOTAO_1 3
#define BOTAO_2 4

// Declarações das funções
int Joystick_GetDirection();
int Botao_IsPressed(int botao);
void processarEntradaUsuario();

#endif // JOYSTICK_H
