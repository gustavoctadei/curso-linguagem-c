#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x, y;
};

void imprime_valor(int n) {
    printf("Valor = %d\n", n);
}

void soma_imprime_valor(int *n) {
    *n = *n + 1;
    printf("Valor = %d\n", *n);
}

/*
void atribui(struct ponto *p) {
    (*p).x = 10;
    //*p.x = 10; //ERRADO, o compilador interpretará *(p.x), ou seja, referência para o campo
    //*(p.x) = 10; //ERRADO
    (*p).y = 20;
} */

void atribui(struct ponto *p) {
    p -> x = 10;
    p -> y = 20;
}

int main() {
    /*Quando trabalhamos com estruturas, podemos passar para a função:
    -um campo
    -toda a estrutura
        -"Por Valor"
        -"Por Referência" */

    //Passando um campo "Por Valor"
    struct ponto p1 = {10, 20};
    imprime_valor(p1.x);
    imprime_valor(p1.y);

    //Passando um campo "Por Referência"
    soma_imprime_valor(&p1.x);
    soma_imprime_valor(&p1.y);

    //Passando uma struct por referência
    atribui(&p1);
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);

    /*Ao acessar uma estrutura passada por referência, não podemos esquecer de colocar os
    parênteses antes de acessar o seu campo. */

    /*Podemos ainda usar o operador SETA "->" para acessar um campo de uma estrutura passada
    por referência */

    system("pause");
    return 0;
}