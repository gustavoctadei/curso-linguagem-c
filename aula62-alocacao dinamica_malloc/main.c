#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Função malloc():
    Serve para alocar memória durante a execução do programa.
    Ela faz o pedido de memória ao computador e retorna um ponteiro
    com o endereço do início do espaço de memória alocado.

    //Protótipo:
    void* malloc(unsigned int num); */

    /////////////////////////////////////////////////////////////////

    /*Funcionamento:
    A função malloc() recebe por parâmetro:
    - a quantidade de bytes a ser alocada e retorna:
        - NULL: no caso de erro;
        - ponteiro para a primeira posição do array.

    //Exemplo:
    //Cria array de 50 inteiros (200 bytes)
    int *v = malloc(200);

    //Cria array de 200 char (200 bytes)
    char *c = malloc(200); */

    ////////////////////////////////////////////////////////////////

    /*Na alocação da memória, deve-se levar em conta o tamanho do tipo.
    //Exemplo: criar um array de tamanho 50
    int *v = (int*) malloc(200);
    char *c = (char*) malloc(50);

    //Solução: usar o sizeof()
    int *v = (int*) malloc(50 * sizeof(int));
    int *c = (char*) malloc(50 * sizeof(char)); */

    ////////////////////////////////////////////////////////////////

    /*Se não houver memória suficiente para alocar a memória requisitada,
    a função malloc() returna NULL */
    int *p;
    p = (int*) malloc(5 * sizeof(int));

    if(p == NULL) {
        printf("Erro: sem memoria!\n");
        exit(1); //Termina o programa
    }

    int i;
    for(i = 0; i < 5; i++) {
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    //Libera a memória alocada
    free(p);

    system("pause");
    return 0;
}