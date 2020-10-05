#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    int i, f = 1;

    for(i = 1; i <= n; i++) {
        //f = f * i;
        f *= i;
    }

    return f;
}

int menu() {
    int i;
    
    do {
        printf("Escolha uma opcao:\n");
        printf("(1) - Opcao 1\n");
        printf("(2) - Opcao 2\n");
        printf("(3) - Opcao 3\n");
        scanf("%d", &i);
    } while( (i < 1) || (i > 3) );

    return 1;
}

int main() {
    /*Corpo da função:
    processa as entradas (parâmetros) e gera a saída (return) da função.
    É formada por declarações e comando */

    /*Exemplo: cálculo do fatorial na main()

    int n, i, f = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        //f = f * i;
        f *= i;
    }

    printf("Fatorial de n = %d\n", f); */

    ////////////////////////////////////////////////////////////////////////

    //Exemplo: função fatorial
    int x, y;

    printf("Digite n: ");
    scanf("%d", &x);

    y = fatorial(x);

    printf("Fatorial de %d: %d\n", x, y);

    //Reutilizando a função fatorial
    int y = fatorial(7);
    printf("7! = %d\n", y);
    printf("5! = %d\n", fatorial(5));

    ////////////////////////////////////////////////////////////////////////

    int op = menu();
    printf("Voce escolheu a Opcao %d\n", op);

    system("pause");
    return 0;
}