#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int n) { //n = x
    n = n + 1;
    printf("Dentro da funcao: x = %d\n", n);
}

int main() {
    /*A Linguagem C permite dois tipos de passagem de parâmetros
    para uma função:

    "Por valor":
    cópia do dado (padrão)

    "Por referência":
    endereço do dado original */

    /*Passagem "Por Valor": uma cópia do dado é feita e passada para a função

    É o modo padrão para os tipos básicos pré-definidos
    int, char, float e double
    e tipos definidos pelo programador
    struct */

    /*Exemplo de passagem "Por Valor":
    void imprime_log(float x);
    int maior(int x, int y);
    void exibe_dados(struct aluno a); */

    //Exemplo de passagem "Por Valor"
    int x = 5;

    printf("Antes da Funcao: x = %d\n", x);

    soma_mais_um(x);

    printf("Depois da Funcao: x = %d\n", x);

    system("pause");
    return 0;
}