#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Para se ler uma string de um arquivo usamos a
    função fgets()

    //Forma geral:
    char* fgets(char *str, int tamanho, FILE *fp);

    //Retorna:
        - Em caso de erro: NULL
        - Em caso de sucesso: um ponteiro para o primeiro caractere de str */

    char str[20];
    FILE *f;

    f = fopen("arquivo.txt", "r");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char *result = fgets(str, 12, f); //10 11
    if(result == NULL) {
        printf("Erro na leitura.\n");
    }
    else {
        printf("%s", str);
    }
    printf("\n");
    
    /*A função fgets() lê uma string até encontrar um caractere
    de nova linha ('\n') ou "tamanho-1" caracteres
    fgets(str, 20, f);
    printf("%s", str); */

    fclose(f);

    system("pause");
    return 0;
}