#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Função calloc():
    Serve para alocar memória durante a execução do programa.
    Ela faz o pedido de memória ao computador e retorna um
    ponteiro com o endereço do início do espeço de memória alocado.

    //Protótipo:
    void* calloc(unsigned int num, unsigned int size); */

    ////////////////////////////////////////////////////////////////

    /*Funcionamento:
    A função calloc() recebe por parâmetro:
    - número de elementos no array a ser alocado;
    - tamanho de cada elemento do array;
    e retorna:
    - NULL: no caso de erro;
    - Ponteiro para a primeira posição do array;

    //Exemplo:
    //Cria array de 50 inteiros (4 bytes cada)
    int *v = (int*) calloc(50, 4);

    //Cria array de 200 char (1 byte cada)
    char *c = (char*) calloc(200, 1); */

    //////////////////////////////////////////////////////////////

    /*Na alocação de memória, deve-se levar em conta o tamanho do tipo

    //Exemplo: criar um array de tamanho 50
    int *v = (int*) calloc(50, 4);
    char *c = (char*) calloc(50, 1);

    //Solução: usar sizeof()
    int *v = (int*) calloc(50, sizeof(int));
    char *c = (char*) calloc(50, sizeof(char)); */

    //////////////////////////////////////////////////////////////

    /*Se não houver memória suficiente para alocar a memória solicitada,
    a função calloc() retorna NULL */
    int *p;
    p = (int*) calloc(5, sizeof(int));

    if(p == NULL) {
        printf("Erro: Sem memoria!\n");
        exit(1); //Termina o programa
    }

    int i;
    for(i = 0; i < 5; i++) {
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    //Libera a memória alocada
    free(p);

    ///////////////////////////////////////////////////////////////

    /*malloc() vs calloc(): ambas servem para alocar memória, mas
    calloc() inicializa todos os BITS do espaço alocado com 0's */
    //int i;
    //int *p;
    int *p1;

    p = (int*) malloc(5 * sizeof(int));
    p1 = (int*) calloc(5, sizeof(int));

    printf("calloc \t\t malloc\n");

    for(i = 0; i < 5; i++) {
        printf("p1[%d] = %d\t", i, p1[i]);
        printf("p[%d] = %d\n", i, p[i]);
    }

    //Libera a memória alocada
    free(p);
    free(p1);

    system("pause");
    return 0;
}