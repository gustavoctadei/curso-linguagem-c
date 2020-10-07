#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Função realloc():
    Serve para alocar ou realocar memória durante a execução
    do programa.
    Ela faz o pedido de memória ao computador e retorna um ponteiro
    com o endereço do início do espaço de memória alocado.

    //Protótipo:
    void* realloc(void* ptr, unsigned int num); */

    ////////////////////////////////////////////////////////////////

    /*Funcionamento:
    A função realloc() recebe por parâmetro:
        -ponteiro para um bloco de memória já alocado;
        -a quantidade de bytes a ser alocada;
        e retorna:
        -NULL: no caso de erro;
        -Ponteiro para a primeira posição do array;

    //Exemplo:
    //Cria array de 50 inteiros (200 bytes)
    int *v = (int*) malloc(200);

    //Aumenta a memória alocada para 100 inteiros (400 bytes)
    v = (int*) realloc(v, 400); */

    ////////////////////////////////////////////////////////////////

    /*Na alocação da memória, deve-se levar em conta o tamanho do tipo

    //Exemplo: criar um array de tamanho 50
    int *v = (int*) malloc(200);
    v = (int*) realloc(v, 400);

    //Solução: usar sizeof()
    int *v = (int*) malloc(50 * sizeof(int));
    v = (int*) realloc(v, 100 * sizeof(int)); */

    ////////////////////////////////////////////////////////////////

    /*Se o ponteiro para o bloco de memória previamente alocado for NULL,
    a função realloc() irá alocar a memória da mesma forma como a função
    malloc().

    int *p;

    //O comando abaixo
    p = (int*) realloc(NULL, 50 * sizeof(int));

    //Equivale a
    p = (int*) malloc(50 * sizeof(int)); */

    /////////////////////////////////////////////////////////////////

    /*Se o tamanho de memória solicitado for igual a zero, realloc irá
    liberar a memória da mesma forma como a função free()
    int *p = (int*) malloc(50 * sizeof(int));

    //O comando abaixo
    p = (int*) realloc(p, 0);

    //Equivale a
    free(p); */

    /////////////////////////////////////////////////////////////////

    /*CUIDADO: se não houver memória suficiente para a locar a memória
    requisitada, a função realloc() retorna NULL
    int *p = (int*) malloc(5 * sizeof(int));
    int *p1 = (int*) realloc(p, 15 * sizeof(int)); //O realloc() "copia" os dados

    if(p1 != NULL) { //realocação deu certo
        p = p1; //Outro ponteiro, pois se ocorrer erro, vou perder p
    } */

    //////////////////////////////////////////////////////////////////

    /*Função free(): sempre que alocamos memória, é necessário liberá-la
    quando ela não for mais necessária */

    int *p = (int*) malloc(5 * sizeof(int));
    p = (int*) realloc(p, 15 * sizeof(int));

    if(p == NULL) { //Em caso de erro, os dados em p serão perdidos, melhor salvar em outro ponteiro
        printf("Erro: Sem memoria!\n");
        exit(1);
    }

    //Libera a memoria alocada
    free(p);

    system("pause");
    return 0;
}