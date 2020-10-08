#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[20], rua[20];
    int idade;
};

int main() {
    /*Em geral, o acesso a um arquivo é quase sempre feito de modo
    sequencial. Porém, a Linguagem C permite realizar operações de
    leitura e escrita randômica usando a função fseek()

    //Forma geral:
    int fseek(FILE *fp, long numbytes, int origem)

    //Parâmetros:
    fp: o ponteiro para o arquivo
    numbytes: é o total de bytes a ser pulado a partir de "origem"
    origem: a partir de onde os "numbytes" serão contados

    //Retorno: ZERO em caso de sucesso */

    //////////////////////////////////////////////////////////////

    /* Os valores possíveis para o parâmetro "origem" são definidos
    por constante na biblioteca stdio.h e são:

    CONSTANTE   |   VALOR   |   SIGNIFICADO
    SEEK_SET    |     0     | Início do arquivo
    SEEK_CUR    |     1     | Ponto atual no arquivo
    SEEK_END    |     2     | Fim do arquivo */

    //////////////////////////////////////////////////////////////

    //Programa para gerar o arquivo
    /*FILE *f = fopen("arquivo.txt", "wb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    struct cadastro cad[4] = {"Ricardo", "Rua 1", 31,
                              "Carlos", "Rua 2", 28,
                              "Ana", "Rua 3", 45,
                              "Bianca", "Rua 4",32};

    fwrite(cad, sizeof(struct cadastro), 4, f);
    
    fclose(f); */

    /////////////////////////////////////////////////////////////

    //Programa para ler o arquivo gerado
    FILE *f = fopen("arquivo.txt", "rb");

    if(f == NULL) {
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    struct cadastro c, c2;

    fseek(f, 2 * sizeof(struct cadastro), SEEK_SET);
    fread(&c, sizeof(struct cadastro), 1, f);

    printf("%s | %s | %d\n", c.nome, c.rua, c.idade);

    ////////////////////////////////////////////////////////////

    /*Outra opção de movimentação dentro do arquivo é simplesmente
    retornar para o seu início usando a função rewind()

    //Forma geral:
    void rewind(FILE *fp); */

    rewind(f); //Voltando para o início do arquivo
    fread(&c2, sizeof(struct cadastro), 1, f);
    printf("%s | %s | %d\n", c2.nome, c2.rua, c2.idade);

    fclose(f);

    system("pause");
    return 0;
}