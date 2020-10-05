#include <stdio.h>
#include <stdlib.h>

//Definindo uma enumeração
//enum semana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

//Definindo uma enumeração
enum semana {Domingo = 1, Segunda, Terca, Quarta = 7, Quinta, Sexta, Sabado};

//Definindo uma Enumeração
enum escapes {retrocesso = '\b', tabulacao = '\t', nova_linha = '\n'};

int main() {
    /*A linguagem C nos permite também criar nossos próprios tipos de variáveis.
    Além da struct e da union, podemor criar uma enum, também chamada de ENUMERAÇÃO

    //Forma geral:
    enum nome_enum {lista de identificadores}; */

    /*Uma enumeração pode ser vista como uma lista de constantes, onde cada constante
    possui um nome significativo; */

    //Declaração de uma variável enum
    enum semana s;

    //atribuindo um valor à variável
    s = Segunda; //1
    printf("Valor = %d\n", s);

    //////////////////////////////////////////////////////////////////////////////////////

    enum semana s1, s2, s3;
    s1 = Segunda; //1
    s2 = Terca; //2
    s3 = s1 + s2; // 1 + 2

    printf("Domingo: %d\n", Domingo);
    printf("s1 = %d\n", s1);
    printf("s2 = %d\n", s2);
    printf("s3 = %d\n", s3);

    if(s3 == Quarta) {
        printf("s3 igual a Quarta\n");
    }

    /////////////////////////////////////////////////////////////////////////////////////

    printf("Domingo: %d\n", Domingo); //1
    printf("Segunda: %d\n", Segunda); //2
    printf("Terca: %d\n", Terca); //3
    printf("Quarta: %d\n", Quarta); //7
    printf("Quinta: %d\n", Quinta); //8
    printf("Sexta: %d\n", Sexta); //9
    printf("Sabado: %d\n", Sabado); //10

    /////////////////////////////////////////////////////////////////////////////////////

    /*Pode-se atribuir valores da tabela ASCII para a enumerecao*/
    enum escapes e = nova_linha;
    printf("Teste %c de %c escrita\n", e, e);

    e = tabulacao;
    printf("Teste %c de %c escrita\n", e, e);

    system("pause");
    return 0;
}