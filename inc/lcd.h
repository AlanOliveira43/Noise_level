#ifndef NOISE_LEVEL_LCD_H
#define NOISE_LEVEL_LCD_H

/**
 * Limpa o conteúdo do LCD.
 */
void LCD_Clear(void);

/**
 * Imprime uma mensagem no LCD.
 * @param mensagem A mensagem a ser exibida.
 */
void LCD_Print(const char* mensagem);

/**
 * Atualiza a interface (LCD e LEDs) com base no nível sonoro.
 * @param nivelSonoro O nível de ruído.
 */
void atualizarInterface(float nivelSonoro);

#endif // NOISE_LEVEL_LCD_H
