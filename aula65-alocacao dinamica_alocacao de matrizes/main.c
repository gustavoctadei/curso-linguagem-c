#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Alocação de arrays multidimensionais:
    Para alocar um array com mais de uma dimensao, precisamos
    utilizar o conteito de "ponteiro para ponteiro".

    //ponteiro (1 nível): cria um vetor
    int *p = (int*) malloc(5 * sizeof(int));

    //ponteiro para ponteiro (2 níveis): permite criar uma matriz
    int **m;

    //ponteiro para ponteiro para ponteiro (3 níveis): permite criar um array de 3 dimensões
    int ***d; */

    /////////////////////////////////////////////////////////////////////////

    /*Em um ponteiro para ponteiro, cada nível do ponteiro permite criar
    uma nova dimensão no array
    //int* -> permite criar um array de int
    //int** -> permite criar um array de int* */

    int **p; //2 "*" = 2 níveis = 2 dimensões
    int i, j, N = 2;

    //criar um array de ponteiros
    p = (int**) malloc(N * sizeof(int*));

    for(i = 0; i < N; i++) {
        //criar um array de int
        p[i] = (int*) malloc(N * sizeof(int));

        for(j = 0; j < N; j++) {
            //lê a matriz de inteiros
            scanf("%d", &p[i][j]);
        }
    }

    /*Em um array com mais de uma dimensão, a memória é liberada na ordem inversa da alocação */

    //int **p; //2 "*" = 2 níveis = 2 dimensões
    //int i, j, N = 2;

    for(i = 0; i < N; i++) {
        free(p[i]);
    }
    free(p);

    system("pause");
    return 0;
}