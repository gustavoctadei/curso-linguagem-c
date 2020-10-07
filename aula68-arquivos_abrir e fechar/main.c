#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Função fopen(): permite abrir um arquivo em um determinado
    modo de leitura ou escrita.

    //Forma geral:
    FILE *fopen(char *nome, char *modo)

    //Exemplo:
    FILE *f;
    f = fopen("arquivo.txt", "w"); */

    /////////////////////////////////////////////////////////////

    /*Se a função fopen() não conseguir abrir o arquivo,
    ela irá retornar NULL
    Exemplo:
    FILE *f;
    f = fopen("H:\arquivo.txt", "w");

    if(f == NULL) {
        printf("Erro na abertura!\n");
        system("pause");
        exit(1); //aborta o programa
    } */

    /////////////////////////////////////////////////////////////

    /*Para o "nome" do arquivo, podemos usar caminho:
    - absoluto (endereço completo)
    - relativo (relativo à pasta do programa)

    Exemplo:

    File *f;

    //Caminho absoluto
    f = fopen("C:\\Projetos\\arq.txt", "w");

    //caminho relativo
    f = fopen("arquivo.txt", "w");
    f = fopen("..\\Novo\\arq2.txt", "w"); */

    //////////////////////////////////////////////////////////////

    /*O modo de abertudo determina que tipo de uso será feito do arquivo
    FILE *f;

    //Leitura de Arquivo Texto
    f = fopen("arquivo.txt", "r");

    //Escrita de Arquivo Texto
    f = fopen("arquivo.txt", "w");

    //Leitura de Arquivo Binário
    f = fopen("arquivo.txt", "rb");

    //Escrita de Arquivo Binário
    f = fopen("arquivo.txt", "wb"); */

    //////////////////////////////////////////////////////////////

    /*Modos de Abertura possíveis:

    -"r"    | Texto |   Leitura. Arquivo deve existir.
    -"w"    | Texto |   Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.
    -"a"    | Texto |   Escrita. Os dados serão adicionados no fim do arquivo ("append").
    -"rb"   | Binário | Leitura. Arquivo deve existir.
    -"wb"   | Binário | Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.
    -"ab"   | Binário | Escrita. Os dados serão adicionados no fim do arquivo ("append").
    -"r+"   | Texto |   Leitura/Escrita. O arquivo deve existir e pode ser modificado.
    -"w+"   | Texto |   Leitura/Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.
    -"a+"   | Texto |   Leitura/Escrita. Os dados serão adicionados no fim do arquivo ("append").
    -"r+b"  | Binário | Leitura/Escrita. O arquivo deve existir e pode ser modificado.
    -"w+b"  | Binário | Leitura/Escrita. Cria arquivo se não houver. Apaga o anterior se ele existir.
    -"a+b"  | Binário | Leitura/Escrita. Os dados serão adicionados no fim do arquivo ("append"). */

    //////////////////////////////////////////////////////////////

    /*Sempre que terminamos de usar um arquivo, devemos fechá-lo. Para realizar
    essa tarefa, usa-se a função fclose()

    //Forma geral:
    int fclose(FILE *f);

    //fclose() retorna ZERO no caso de sucesso no fechamento do arquivo. */

    ////////////////////////////////////////////////////////////////

    //Exemplo:
    FILE *f;
    f = fopen("arquivo.txt", "w");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    //Fechar o arquivo garante que todos os dados foram realmente gravados
    fclose(f);

    system("pause");
    return 0;
}