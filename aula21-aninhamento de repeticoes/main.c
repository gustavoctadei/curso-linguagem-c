#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Aninhamento de repeticoes:
    Trata-se do uso de um comando de repeticao (while, for ou do-while) dentro do outro

    //Exemplo:
    repecitcao(condicao1) {
        conjunto de comandos;
        repeticao(condicao2) {
            conjunto de comandos;
            repeticao...
        }
    }
    */

    int i, j;

    for(i = 1; i < 5; i++) {
        for(j = 1; j<5; j++) {
            if(i == j) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        
        printf("\n");
    }

    /////////////////////////////////////

    i = 1;

    while(i < 5) {
        j = 1;
        while(j < 5) {
            if(i == j) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }

            j++;
        }

        printf("\n");
        i++;
    }

    //////////////////////////////////////

    i = 1;

    while(i < 5) {
        for(j = 1; j < 5; j++) {
            if(i == j) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        
        printf("\n");
        i++;
    }

    system("pause");
    return 0;
}