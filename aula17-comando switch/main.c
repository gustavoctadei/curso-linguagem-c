#include <stdio.h>
#include <stdlib.h>

int main(){
    /*O comando switch
    permite fazer selecoes multiplas com base no valor de uma variavel do tipo int ou char

    //forma geral:
    switch(variavel){
    case valor1: conjunto de comandos; break;
    case valor2: conjunto de comandos; break;
    case valorn: conjunto de comandos; break;
    default: conjunto de comandos; break;
    }
    */

    char ch;

    printf("Digite um simbolo de pontuacao: ");
    scanf("%c", &ch);

    switch (ch){
        case '.': printf("Ponto.\n"); break;
        case ',': printf("Virgula.\n"); break;
        case ':': printf("Dois pontos.\n"); break;
        case ';': printf("Ponto e virgula.\n"); break;
        default: printf("Nao eh pontuacao.\n");
    }

    system("pause");
    return 0;
}