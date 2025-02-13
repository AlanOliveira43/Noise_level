#ifndef LCD_H
#define LCD_H

#include <stdio.h>

// Definição das cores
#define LCD_LED_GREEN 0
#define LCD_LED_YELLOW 1
#define LCD_LED_RED 2

// Declaração das funções do LCD
void LCD_Clear();
void LCD_Print(const char* mensagem);
void LED_SetColor(int cor);
void atualizarInterface(float nivelSonoro);

#endif // LCD_H
