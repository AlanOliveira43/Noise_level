#ifndef HTTP_CLIENT_H
#define HTTP_CLIENT_H

/**
 * Realiza uma requisição HTTP POST.
 * @param url URL para onde a requisição será enviada.
 * @param payload Dados a serem enviados.
 * @return Código de status (0 para sucesso).
 */
int HTTP_Post(const char* url, const char* payload);

#endif // HTTP_CLIENT_H
