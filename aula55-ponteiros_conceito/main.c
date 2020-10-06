#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Variáveis: armazenam dados
    int, float, double, char, struct, etc

    Ponteiros: tipo especial de variável que armazena
    endereços de memória */

    /*Forma geral de declaração:

    Variáveis:
    tipo_variavel nome_variavel;
    int x;

    Ponteiros:
    tipo_ponteiro *nome_ponteiro
    int *x; */

    /*Ponteiros não inicializados apontam para um lugar indefinido
    int *p;

    Um ponteiro pode ter um valor especial NULL, que é o endereço de nenhum lugar
    int *p = NULL; */

    /*Podemos apontar o ponteiro para uma variável que já exista no programa */
    int x = 10;
    int *p;

    //Ponteiro p aponta para a variável x
    p = &x;

    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("p = %d\n", p);

    /*Para acessa o valor da variável apontada por um ponteiro, basta usar
    o operador asterisco (*) */
    printf("*p = %d\n", *p);

    /*O operador asterisco (*) permite modificar o conteúdo da posição
    de memória apontada. */

    *p = 12;
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);

    system("pause");
    return 0;
}