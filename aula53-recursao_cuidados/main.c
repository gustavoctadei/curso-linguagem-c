#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if(n == 0) { //critério de parada
        return 1;
    }
    else { //parâmetro da chamada recursiva
        return n * fatorial(n-1); //Quando for chamar novamente, o valor do parâmetro deve mudar
    }
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2); //Duas chamadas recursivas, lento e alto gasto de memória, cálculos repetidos
    }
}

int main() {
    /*Durante a implementação de uma função recursiva,
    temos que ter em mente duas coisas:
    -critério de parada
    -parâmetro da chamada recursiva */

    /*Critério de parada:
    Determina quando a função deve para de chamar a si mesma */

    /*Algoritmos recursivos tendem a necessitar de mais tempo e/ou
    espaço do que algoritmos iterativos
    Exemplo: sequência de Fibonacci
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... */

    int x, fib;
    scanf("%d", &x);

    fib = fibonacci(x);
    printf("R: %d\n", fib);

    system("pause");
    return 0;
}