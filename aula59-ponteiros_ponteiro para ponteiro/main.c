#include <stdio.h>
#include <stdlib.h>

int main() {
    /*A Linguagem C permite criar ponteiros com diferentes níveis
    de apontamento:
    Ponteiros que apontam para outros ponteiros */
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    //Endereço em p2
    printf("p2: %d\n", p2); //&p

    //Conteudo do endereco
    printf("*p2: %d\n", *p2); //&x

    //Conteúdo do endereço do endereço
    printf("**p2: %d\n", **p2); //x

    ///////////////////////////////////////////////////////////////////

    /*É a quantidade de asteriscos (*) na declaração do ponteiro
    que indica o número de níveis do ponteiro */

    /*//Variável int
    int x;

    //ponteiro para int (1 nível)
    int *p1;

    //ponteiro para ponteiro (2 níveis)
    int **p2;

    //ponteiro para ponteiro para ponteiro de int (3 níveis)
    int ***p3; */

    //////////////////////////////////////////////////////////////////

    /*Acessando o conteúdo de um ponteiro para ponteiro */
    char letra = 'a';
    char *ptrChar = &letra;
    char **ptrPtrChar = &ptrChar;
    char ***ptrPtr = &ptrPtrChar;

    printf("*ptrChar: %c\n", *ptrChar);
    printf("**ptrPtrChar: %c\n", **ptrPtrChar);
    printf("***ptrPtr: %c\n", ***ptrPtr);

    system("pause");
    return 0;
}