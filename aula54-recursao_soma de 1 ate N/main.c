#include <stdio.h>
#include <stdlib.h>

int soma(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + soma(n-1);
    }
}

int main() {
    /*Crie uma função recursiva que calcule o somatório
    de 1 a N

    Soma(4) = 1 + 2 + 3 + 4
    Soma(3) = 1 + 2 + 3
    Soma(2) = 1 + 2
    Soma(1) = 1 */

    /*
    Soma(4) = 4 + Soma(3)
    Soma(3) = 3 + Soma(2)
    Soma(2) = 2 + Soma(1)
    Soma(1) = 1 + Soma(0)

    //Generalizando
    Soma(n) = n + Soma(n-1)

    //Caso base (Critério de parada)
    Soma(0) = 0 */
    int x, r;

    scanf("%d", &x);

    r = soma(x);
    printf("R: %d\n", r);

    system("pause");
    return 0;
}