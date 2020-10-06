#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x, y;
};

typedef struct ponto Ponto;

int main() {
    /*Alocar memória do tipo int é diferente de alocar
    memória do tipo char:
    - tipos diferentes podem ter tamanhos diferentes na
    memória.

    char:   1 byte
    int:    4 bytes
    float:  4 bytes
    double: 8 bytes */

    /////////////////////////////////////////////////////

    /*O operador sizeof() retorna o número de bytes necessários
    para alocar um único elemento de um determinado tipo de dado.

    //Forma geral:
    sizeof(nome_do_tipo);

    //Exemplo:
    int x = sizeof(int);
    printf("x = %d\n", x); */

    printf("char: %d bytes\n", sizeof(char) );
    printf("int: %d bytes\n", sizeof(int) );
    printf("float: %d bytes\n", sizeof(float) );
    printf("double: %d bytes\n", sizeof(double) );
    printf("struct ponto: %d bytes\n", sizeof(struct ponto) );
    printf("Ponto: %d bytes\n", sizeof(Ponto) );

    system("pause");
    return 0;
}