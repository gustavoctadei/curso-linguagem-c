#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    //forma geral
    valor1 "operador_relacional" valor2

    //resultado da comparacao
    0: a comparacao é falsa
    1: a comparacao é verdadeira 
    */

    /*
    //operadores relacionais
    > "maior do que"
    >= "maior ou igual a"
    < "menor do que"
    <= "menor ou igual"
    == "igual a"
    != "diferente de"
    */

    int x = 5, y = 3;

    printf("Resultado = %d\n", x > 4);
    printf("Resultado = %d\n", x >= y+2);

    printf("Resultado = %d\n", x == 4);
    printf("Resultado = %d\n", x-2 != y);
    printf("Resultado = %d\n", x = 4); //errado

    system("pause");
    return 0;
}