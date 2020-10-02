#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[20] = "Hello World";
    char str2[20];
    
    //str2 = str1; //Errado

    int i;

    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    ////////////////////////////////////////////////////

    /*A linguagem C possui algumas funcoes para manipulacao de strings

    //Biblioteca string.h
    strlen Tamanho da string
    strcpy Copiar uma string
    strcat Concatenar duas strings
    strcmp Comparar duas strings
    
    */

    //O tamanho de uma string
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho = %d\n", tamanho);

    //Copiando uma string
    char palavra[20] = "Linguagem C";
    char novapalavra[30];

    strcpy(novapalavra, palavra); //Tomar cuidado com o tamanho
    printf("Copia: %s\n", novapalavra);

    //Concatenando duas string
    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";

    strcat(palavra1, palavra2);
    printf("Concatenada: %s\n", palavra1);

    //Comparando duas strings
    char palavra1[20] = "Linguagem C";
    char palavra2[30] = "LINGUAGEM C";

    if( strcmp(palavra1, palavra2) == 0 ) {
        printf("Strings iguais.\n");
    }
    else {
        printf("Strings diferentes.\n");
    }

    system("pause");
    return 0;
}