#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Para ler um caractere de um arquivo, usamos a função fgetc()

    //Forma geral:
    int fgetc(FILE *fp);

    Retorna:
        - Em caso de erro: a constante EOF
        - Em caso de sucesso: o caractere lido do arquivo */

    FILE *f;
    f = fopen("arquivo.txt", "r");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char c;
    int i;

    //Lê o arquivo, um caractere por ver
    /*for(i = 0; i <= 10; i++) {
        c = fgetc(f);
        printf("%c", c);
    } */

    //printf("\nFim\n");
    //fclose(f);

    /////////////////////////////////////////////////////////////////

    /*Antes, usamos a função fgetc() para ler 10 caracteres de um arquivo.

    Como fazer para ler todos os caracteres?

    Solução: usar a constante EOF (End Of File).
    Quando atingirmos o final de um arquivo, a função fgetc() devolve a constante EOF */

    do {
        c = fgetc(f);
        printf("%c", c);
    } while(c != EOF);

    printf("\nFim\n");
    fclose(f);

    system("pause");
    return 0;
}