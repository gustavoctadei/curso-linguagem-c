#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*Para se escrever um caractere em um arquivo usamos a função
    fputc()

    //Forma geral:
    int fputc(char c, FILE *fp);

    Retorna
        - Em caso de erro: a constante EOF
        - Em caso de sucesso: o próprio caractere */

    FILE *f;
    f = fopen("arquivo.txt", "w");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char texto[20] = "Meu programa em C";
    int i;

    //Grava a string, caractere a caractere
    for(i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f);
        //fputc(' ', f);
        //fputc('-', f);
    }

    fclose(f);

    system("pause");
    return 0;
}