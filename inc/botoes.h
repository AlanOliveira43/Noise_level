#ifndef BOTOES_H
#define BOTOES_H

// Enumeração para identificar os botões.
typedef enum {
    BOTAO_NONE = 0,
    BOTAO_ONE,
    BOTAO_TWO
} Botao;

/**
 * Inicializa os botões.
 */
void Botoes_Init(void);

/**
 * Verifica qual botão foi pressionado.
 * @return Um valor do tipo Botao (BOTAO_NONE se nenhum foi pressionado).
 */
Botao Botao_GetPressed(void);

#endif // BOTOES_H
