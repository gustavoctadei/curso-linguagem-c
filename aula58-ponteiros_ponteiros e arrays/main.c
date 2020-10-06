#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Array: conjunto de dados armazenados de forma sequencial
    na memória */
    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet; //Aponta para o início do vetor
    int i;

    for(i = 0; i < 5; i++) {
        printf("%d\n", p[i] );
    }

    //////////////////////////////////////////////////////////

    /*O nome do array é apenas um ponteiro que aponta para
    o primeiro elemento do array */
    for(i = 0; i < 5; i++) {
        printf("%d\n", *(p+i) );
    }

    //////////////////////////////////////////////////////////

    /*A anotação de colchetes é apenas uma simplificação da aritmética
    de ponteiros com acesso ao conteúdo */

    printf("vet[2] = %d\n", vet[2]);
    printf("vet[2] = %d\n", *(vet+2) );

    //////////////////////////////////////////////////////////

    /*Acessando o endereço de um elemento do array */

    printf("&vet[2] = %d\n", &vet[2]);
    printf("&vet[2] = %d\n", (vet+2) );

    //////////////////////////////////////////////////////////

    /*Também podemos declarar um array de ponteiros

    //Forma geral:
    tipo_dado *nome_array[tamanho];

    int *vet[5]; //Array de 5 ponteiros */

    /*Cada elemento do array pode apontar para um endereço de memória,
    seja ele de uma variável ou de um array */
    int *pvet[2];
    int x = 10, y[2] = {20, 30};

    pvet[0] = &x;
    pvet[1] = y;

    printf("pvet[0]: %p\n", pvet[0]); //&x
    printf("pvet[1]: %p\n", pvet[0]); //&y[0]

    printf("*pvet[0]: %d\n", *pvet[0]); //x
    printf("pvet[1][1]: %d\n", pvet[1][1]); //y[1]

    system("pause");
    return 0;
}