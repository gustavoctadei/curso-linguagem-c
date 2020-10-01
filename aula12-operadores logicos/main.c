#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    //Operadores Logicos
    && Operador "E"
    || Operador "OU"

    //Forma Geral
    expressao "operador logico" expressao

    //resultado da operacao
    0: a operacao é falsa
    1: a operacao é verdadeira
    */

    //Operador E (&&): o resultado é 1 apenas se ambas as expressões
    //também forem 1, do contrário o resultado é 0
    int r, x = 5, y = 3;

    r = (x > 2) && (y < x);
    printf("Resultado: %d\n", r);

    r = (x%2 == 0) && (y > 0);
    printf("Resultado: %d\n", r);

    //Operador OU (||): o resultado é 1 se pelo menos uma das expressões for 1
    // e o resultado é 0 se ambas as expressões forem 0
    r = (x > 2) || (y > x);
    printf("Resultado: %d\n", r);

    r = (x%2 == 0) || (y < 0);
    printf("Resultado: %d\n", r);

    /*
    //Operador de Negacao (!)

    //forma geral
    !(expressao)

    //resultado da operacao
    0: se a expressao valer 1
    1: se a expressao valer 0
    */

    r = !(x > 2);
    printf("Resultado: %d\n", r);

    r = !( (x > 7) && (x > y) );
    printf("Resultado: %d\n", r);
    
    system("pause");
    return 0;
}