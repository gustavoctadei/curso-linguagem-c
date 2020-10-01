#include <stdio.h>
#include <stdlib.h>

int main() {
    /*O comando for:
    permite executar, repetidamente, um conjunto de comandos de acordo com uma condicao

    //forma geral:
    for(inicializacao; condicao; incremento) {
        conjunto de comandos
    }
    */

    int a, b, c;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    for(c = a; c <= b; c++) {
        printf("%d\n", c);
    }

    /*
    //Loop Infinito:
    for(c = a; a <= b; c++) {
        printf("%d\n", c);
    }
    */

    //Condicoes mais complexas
    for(c = a; c <= b && c > 0; c++) {
        printf("%d\n", c);
    }

    ///////////////////////////////////////////////////////////////

    int i, j;

    //Na inicializacao e incremento e/ou decremento, podemos utilizar mais de uma variavel
    for(i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d | j = %d\n", i, j);
    }

    printf("Fim do programa");
    system("pause");
    return 0;
}