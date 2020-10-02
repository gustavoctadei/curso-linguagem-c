#include <stdio.h>
#include <stdlib.h>

int main() {
    /*String: um array de caracteres
    Permite amazenar uma sequencia de caracteres adjacentes na memoria (palavras ou frases)

    //forma geral:
    char nome_array[tamanho];

    //Exemplo:
    char palavra[20];
    */

    //Lendo e escrevendo uma string
    char palavra[20];

    printf("Digite uma palavra: ");
    scanf("%s", palavra); //a entrada é lida até digitar enter ou espaço
    //gets(palavra); //a entrada é lida até digitar enter
    
    printf("Palavra lida: %s\n", palavra);

    ///////////////////////////////////////////////////////////////////////

    //Inicializando uma string

    //Forma convencional
    char nome1[20] = {'J', 'o', 'a', 'o', '\0'};
    printf("Nome: %s\n", nome1);

    //Forma especial
    char nome2[20] = "Joao";
    printf("Nome: %s\n", nome2);

    /////////////////////////////////////////////////////////////////////////

    char palavra[20] = "Teste";
    printf("Palavra: %s\n", palavra);

    palavra[0] = 'L';
    printf("Palavra: %s\n", palavra);

    //////////////////////////////////////////////////////////////////////

    /*A funcao do '\0' é desconsiderar as posições restantes da string
    */

   char palavra[20] = "Oitenta";
   printf("Palavra: %s\n", palavra);

   palavra[2] = '\0';
   printf("Palavra: %s\n", palavra);

    system("pause");
    return 0;
}