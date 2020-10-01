#include <stdio.h>
#include <stdlib.h>

int main() {
    /*O comando do-while:
    Permite executar, repetidamente e ao menos uma vez um conjunto de comandos de acordo com uma condição

    //Forma geral:
    do {
        conjunto de comandos
    } while(condicao);
    */

    int a, b;

    printf("Digite dois valor inteiros: ");
    scanf("%d %d", &a, &b);

    do {
        printf("%d\n", a);
        a++;
    } while(a < b);

    /*Risco de Loop Infinito
    do {
        printf("%d\n", a);
        a--; //A condicao sempre sera verdadeira
    } while(a < b);
    */

    //Condicoes mais complexas
    do {
        printf("%d\n", a);
        a++;
    } while(a < b && a > 0);

    //do-while tambem pode ser utilizado para exibir menus
    int i;

    do {
        printf("Escolha uma opcao:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d, &i");
    } while( (i < 1) || (i > 3) );

    printf("Voce escolheu a Opcao %d\n", i);

    printf("Fim do programa.\n");
    system("pause");
    return 0;
}