#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    //Inicializando um array com zeros
    int vet[5], i;
    for(i=0; i < 5; i++) {
        vet[i] = 0;
    }

    //inicializando um array com um valor em cada posicao
    //int vet[5];
    vet[0] = 15;
    vet[1] = 12;
    vet[2] = 9;
    vet[3] = 1;
    vet[4] = 35;
    */

    /*Podemos definir uma lista de valores para colocar no array

    //Forma geral:
    tipo nome_array[tam1]...[tamN] = [valores];
    */

    //Exemplo
    int vet[5] = {15, 12, 9, 1, 35};

    //Inicializando um vetor
    float vetor[3] = {1.5, 22.1, 4.56};

    //Inicializando uma matriz
    int matriz1[2][3] = {1, 2, 3, 4, 5, 6};

    //Inicializando uma matriz
    int matriz2[2][3] = { {1, 2, 3}, {4, 5, 6} };

    //Inicializacao sem tamanho
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //O numero de linhas de matriz sera 5
    int matriz[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //somente a primeira dimensao pode ficar implicita

    system("pause");
    return 0;
}