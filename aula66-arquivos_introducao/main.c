#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Arquivo: coleção de bytes armazenados em um dispositivo
    de armazenamento secundário
        -disco rígido
        -CD
        -DVD
        -etc */
    
    /*Vantagens de se usar arquivos:
        -armazenamento durável
        -permitem armazenar uma grande quantidade de informação
        -acesso concorrente aos dados */

    /*Cuidado: A extensão do arquivo não define o seu tipo

    O que define um arquivo é a maneira como os dados estão organizados
    e as operações usadas por um programa para processar (ler ou escrever)
    esse arquivo. */

    /*Arquivos: biblioteca stdio.h

    A Linguagem C utiliza um tipo especial de ponteiro para manipular arquivos. */

    //Forma geral:
    FILE *nome_ponteiro;

    /*É esse ponteiro que controla o fluxo de leitura e escrita dentro
    de um arquivo. */

    system("pause");
    return 0;
}