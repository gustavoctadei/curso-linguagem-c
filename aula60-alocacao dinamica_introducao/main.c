#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Uma variável é uma posição de memória que armzena um dado
    que pode ser usado pelo programa.
    Deve ser declarada durante o desenvolvimento do programa. */
    int x, y;
    float c;
    char nome[50];

    /////////////////////////////////////////////////////////////

    /*Problema: precisamos construir um programa que processe os
    valores dos salários dos funcionários de uma pequena empresa.
    Solução simples: declarar um array bem grande. */
    
    float salarios[1000];

    /////////////////////////////////////////////////////////////

    /*Considere o seguinte:
    - Arrays são agrupamentos sequenciais de dados de um mesmo tipo
    na memória.
    - Um ponteiro guarda o endereço de um dado na memória.
    - O nome do array é um ponteiro para o primeiro elemento do array

    Idéia: Posso solicitar um bloco de memória e colocar a sua
    primeira posição em um ponteiro? */

    /////////////////////////////////////////////////////////////

    /*A Linguagem C permite alocar (reservar) dinamicamente (em
    tempo de execução) blocos de memória utilizando ponteiros. A esse
    processo dá-se o nome de ALOCAÇÃO DINÂMICA. */

    /*A Linguagem C ANSI usa apenas 4 funções para a alocação dinâmica,
    disponíveis na biblioteca stdlib.h
    -malloc
    -calloc
    -realloc
    -free

    //Existe também o operador
    sizeof */

    system("pause");
    return 0;
}