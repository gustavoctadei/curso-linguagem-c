#include <stdio.h>
#include <stdlib.h>
//#define N 100

int main() {
    /*Array de duas dimensoes: matriz

    //Forma geral:
    tipo nome_array[nro_linhas][nro_colunas];

    //Exemplo:
    int mat[3][2];
    */

    /*//Declaracao:
    int n = 5;

    float F[N+1][N]; //Correto, N Definido antes do main
    char frases[30][50]; //Correto
    int mat[n][n]; //errado, n é variável
    int M[4.5][5]; //as dimensoes devem ser numero inteiro
    */

    /*Acesso aos elementos: indice
    int mat[3][2];
    mat[0][0] = 5; //primeira posicao
    mat[0][1] = 23;
    mat[2][1]; //ultima posicao
    */

    /*
    int mat[3][2], M[3][2];
    scanf("%d", &mat[2][0]); //comando de leitura
    mat[0][0] = 10; //comando de atribuicao
    mat[1][1] = mat[0][0] + mat[2][0]; //expressao
    mat = M; //errado
    */

    int mat[100][50];
    int i, j;

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 50; j++) {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    system("pause");
    return 0;
}