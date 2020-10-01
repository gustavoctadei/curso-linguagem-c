#include <stdio.h>
#include <stdlib.h>

int main(){
    /* O comando else:
    permite executar um segundo conjunto de comandos caso a condição do comando if for falsa

    //Forma geral:
    if (condicao){
        primeiro conjunto de comandos
    }else{
        segundo conjunto de comandos
    }
    */

   int x;

   printf("Digite um valor inteiro: ");
   scanf("%d", &x);

   if (x%2 == 0){
       printf("O valor eh Par.\n");
   }else{
       printf("O valor eh Impar.\n");
   }

   //Caso dentro do if e do else haja apenas um comando, chaves não são necessárias
   //As chaves do if e do else sao independentes, um pode ter chaves e outro não dependendo da quantidade
   //de comandos de cada um
   if (x%2 == 0)
       printf("O valor eh Par.\n");
   else
       printf("O valor eh Impar.\n");

    printf("Fim do programa\n");
    system("pause");
    return 0;
}