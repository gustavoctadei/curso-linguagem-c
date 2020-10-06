#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * fatorial(n-1);
    }
}

int main() {
    /*A ideia básica da recursão é dividir e conquistar:
    - problema maior -> problemas menores
    - solucionar problemas menores
    - combinar soluções */

    /*Quando uma função chama outra, a função que chama pausa
    e a função que foi chamada começa a executar. Em recursividade,
    cada vez que uma função chama a si própria, as execuções são colocadas
    como numa pilha */
    int x = fatorial(4);

    system("pause");
    return 0;
}