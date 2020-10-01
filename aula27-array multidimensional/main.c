#include<stdio.h>
#include<stdlib.h>

int main() {
    /*A linguagem C permite declararmos arrays com multiplas dimensoes

    //declara array de int com 1 dimensao
    int vet[5];

    //declara array de float com 2 dimensoes
    float mat[5][5];

    //declara array de double com 3 dimensoes
    double cub[5][5][5];

    //declara array de int com 4 dimensoes
    int X[5][5][5][5];
    */

    int cub[5][5][5];
    int i, j, k;

    //preenche o array de 3 dimensoes com zeros
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            for(k = 0; k < 5; k++) {
                cub[i][j][k] = 0;
            }
        }
    }

    system("pause");
    return 0;
}