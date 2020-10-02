#include <stdio.h>
#include <stdlib.h>

int main() {
    //Maior elemento de um array
    int lista[5] = {3, 18, 2, 51, 45};
    int maior = lista[0], i;

    for(i = 1; i < 5; i++) {
        if (maior < lista[i]) {
            maior = lista[i];
        }
    }

    printf("Maior: %d\n", maior);

    ////////////////////////////////////

    int mat[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int i, j, maior = mat[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(maior < mat[i][j]) {
                maior = mat[i][j];
            }
        }
    }

    printf("Maior = %d\n", maior);

    system("pause");
    return 0;
}