#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Para se escrever uma STRING em um arquivo
    usamos a função fputs()

    //Forma geral:
    int fputs(char *str, FILE *fp);

    //Retorna:
    - Em caso de erro: a constante EOF
    - Em caso de sucesso: um valor diferente de ZERO */

    FILE *f;
    f = fopen("arquivo.txt", "w");

    if(f == NULL) {
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    char texto[20] = "Meu programa em C";
    int retorno = fputs(texto, f);

    /*A função fputs() não coloca o caractere de nova linha '\n',
    nem nenhum outro tipo de caractere, no final da string escrita */

    /*fputs("Hello", f);
    fputs("World", f);*/

    /*Então, como separar as strings?
    fputs("Hello\n", f);
    fputs("World\n", f);
    
    //OU
    fputs("Hello", f);
    fputc('\n', f);
    fputs("World", f); */

    if(retorno == EOF) {
        printf("Erro na Gravacao.\n");
    }
    fclose(f);

    system("pause");
    return 0;
}