#include <stdio.h>
#include <stdlib.h>

int main() {
    /*A Linguagem C trabalha com apenas dois tipos de arquivos:
    - arquivos texto: podem ser editados no bloco de notas
    - arquivos binários: NÃO podem ser editados no bloco de notas */

    ///////////////////////////////////////////////////////////////////////////////////

    /*Arquivos texto:
    - Os dados são gravados exatamente como seriam impressos na tela.
    - Os dados são gravados como caracteres de 8 bits utilizando a tabela ASCII
    - Para isso, existe uma etapa de "conversão" dos dados. */

    /*Problemas com a conversão:
    - arquivos maiores
    - leitura e escrita lentas

    Considere um número inteiro com 8 dígitos

    int n = 12345678; //32 bits (4 bytes) na memória

    Num arquivo texto, cada dígito será convertido para seu caractere ASCII, ou seja,
    8 bits (1 byte) por dígito.

    "12345678" //64 bits (8 bytes) no arquivo */

    //////////////////////////////////////////////////////////////////////////////////

    /*Arquivo binário:
    - Os dados são gravados exatamente como estão organizados na memória do computador.
    - Não existe etapa de "conversão" dos dados.

    Consequentemente:
    - arquivos, em geral, menores
    - leitura e escrita mais rápidas 

    Voltemos ao número inteiro com 8 dígitos:

    int n = 12345678; //32 bits (4 bytes) na memória.

    Num arquivo binário, o conteúdo da memória será copiado diretamente para o arquivo,
    sem conversão

    12345678 //32 bits (4 bytes) no arquivo (codificado) */

    system("pause");
    return 0;
}