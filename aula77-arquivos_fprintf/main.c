#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Nas útimas aulas vimos como ler e escrever em arquivos, caracteres,
    strings e até blocos de bytes.

    A Linguagem C também permite escrever uma lista formatada de variáveis
    em um arquivo do mesmo modo como fazemos na tela do computador com a
    função printf()

    Para isso, usamos a função fprintf()

    //Forma geral: printf()
    printf("tipos de saída", variáveis);

    //Forma geral: fprintf()
    fprintf(FILE *f, "tipos de saída", variáveis); */

    char nome[20] = "Ricardo";
    int i = 31;
    float a = 1.74;
    FILE *f = fopen("arquivo.txt", "w");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    printf("Nome: %s | Idade: %d | Altura: %.2fm\n", nome, i, a);
    fprintf(f, "Nome: %s | Idade: %d | Altura: %.2fm\n", nome, i, a);

    fclose(f);

    system("pause");
    return 0;
}