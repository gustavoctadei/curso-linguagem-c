#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Nas últimas aulas, vimos como ler e escrever em arquivos, caracteres
    strings e até mesmo blocos de bytes.

    A Linguagem C também permite ler uma lista formatada de variáveis do
    arquivo do mesmo modo como fazemos do teclado do computador com a função
    scanf()

    Para isso, usamos a função fscanf()

    //Forma geral: scanf()
    scanf("tipos de entrada", variáveis);

    //Forma geral: fscanf()
    fscanf(FILE *f, "tipos de entrada", variáveis); */

    FILE *f = fopen("arquivo.txt", "r");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char texto[20], nome[20];
    int idade;
    float altura;

    fscanf(f, "%s %s | ", texto, nome);
    printf("%s %s\n", texto, nome);

    fscanf(f, "%s %d | ", texto, &idade);
    printf("%s %d\n", texto, idade);

    fscanf(f, "%s %f", texto, &altura);
    printf("%s %.2fm\n", texto, altura);

    system("pause");
    return 0;
}