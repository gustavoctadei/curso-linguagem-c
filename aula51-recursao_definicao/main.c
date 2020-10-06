#include <stdio.h>
#include <stdlib.h>

void imprime(int n) {
    int i;

    for(i = 0; i <= n; i++) {
        printf("Linha %d\n", i);
    }
}

int fatorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n*fatorial(n-1);
    }
}

int main() {
    imprime(5);

    /*Uma função, pode, inclusive, chamar a si prória. A isso
    chamamos de recursividade */
    int x = fatorial(5);

    printf("Fim do programa!\n");
    system("pause");
    return 0;
}