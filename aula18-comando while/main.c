#include <stdio.h>
#include <stdlib.h>

int main() {
    /*O comando while:
    permite executar, repetidamente, um conjunto de comandos de acordo com uma condicao

    //Forma geral:
    while(condicao) {
        conjunto de comandos
    }
    */

    int a, b;
    
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    while(a < b) {
        a++;
        printf("%d\n", a);
    }

    /*Exemplo de loop infinito, a condicao sempre é verdadeira
    while(a < b) {
        a--;
        printf("%d\n", a);
    }
    */

    //Condicoes mais complexas
    while(a < b && a > 0) {
        a++;
        printf("%d\n", a);
    }

    printf("Fim do programa");

    system("pause");
    return 0;
}