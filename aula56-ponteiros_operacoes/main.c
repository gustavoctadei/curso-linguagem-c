#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Atribuição: um ponteiro só pode receber o endereço
    de uma variável do mesmo tipo do ponteiro */

    int *p, *p1, x = 20;
    float y = 20.0;

    p = &x;
    printf("*p: %d\n", *p);

    p1 = p;
    printf("*p1: %d\n", *p1);

    //p = &y; //ERRADO

    //////////////////////////////////////////////////////////////////////

    /*Sobre o valor de endereço armazenado por um ponteiro,
    podemos apenas somar e subtrair valores INTEIROS.

    As operações aritméticas com ponteiros respeitam o tamanho do tipo.
    Ex: int = 4 bytes; */

    //int *p;
    *p = 0x5DC; //1500
    printf("p = %d\n", p);

    p++;
    printf("p = %d\n", p); //1504

    p = p + 15;
    printf("p = %d\n", p); //1564

    p = p - 2;
    printf("p = %d\n", p); //1556

    //////////////////////////////////////////////////////////////////////

    /*As operações de adição e subtração no endereço dependem do tipo
    de dado que o ponteiro aponta */
    //int *p;
    *p = 0x5DC; //1500
    char *c = 0x5DC; //1500

    printf("p = %d | c = %d\n", p, c);

    p++; //1504
    c++; //1501

    printf("p = %d | c = %d\n", p, c);

    ////////////////////////////////////////////////////////////////////

    /*Ponteiros podem ser comparados usando:
    ==, !=, >, <, >= e <= */
    //int *p, *p1, x;
    int z;
    
    p = &x;
    p1 = &z;

    if(p == p1) {
        printf("Ponteiros iguais.\n");
    }
    else {
        printf("Ponteiros diferentes.\n");
    }

    if(p > p1) {
        printf("p > p1\n");
    }
    else {
        printf("p <= p1\n");
    }

    system("pause");
    return 0;
}