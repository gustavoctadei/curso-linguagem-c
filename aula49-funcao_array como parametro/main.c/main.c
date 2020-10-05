#include <stdio.h>
#include <stdlib.h>

void imprime(int *n, int m) {
    /*Na função, continuamos usando colchete e índice */
    int i;

    for(i = 0; i < m; i++) {
        printf("%d\n", n[i]);
    }
}

void imprime_matriz(int m[][2], int n) {
    int i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }
}

int main() {
    /*Arrays são sempre passados "Por Referência" para uma função

    Isso evita a cópia desnecessária de grandes quantidades de dados
    para outras áreas de memória durante a chamada da função, o que
    afetaria o desempenho do programa */

    /*Passando um array "Por Referência"

    void imprime(int *m, int n);
    void imprime(int m[], int n);
    void imprime(int m[5], int n); //O tamanho do vetor passado não significa nada, é ignorado */

    /*Na chamada da função, usa-se apenas o nome do array (sem colchete e índice) e sem o operador "&"*/
    int v[5] = {1, 2, 3, 4, 5};
    imprime(v, 5);

    /*Arrays com mais de uma dimensão precisam da informação do tamanho das outras dimensões */
    int mat[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    imprime_matriz(mat, 3);

    system("pause");
    return 0;
}