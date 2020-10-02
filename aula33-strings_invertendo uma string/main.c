#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*
    //Invertendo uma string
    char str[20] = "Linguagem C";
    int i;

    for(i = strlen(str) - 1; i>=0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    */

    /////////////////////////////////////////////////////

    /*
    char str[20] = "Linguagem C";
    char str2[20];
    int i, j = 0;

    for(i = strlen(str)-1; i >= 0; i--) {
        str2[j] = str[i];
        j++;
    }
    str2[j] = '\0';

    printf("str2 = %s\n", str2);
    */

///////////////////////////////////////////////////////

    char str[20] = "Linguagem C";
    char c;
    int i, tam = strlen(str);

    for (i = 0; i < tam/2; i++) {
        c = str[i];
        str[i] = str[tam -1 -i];
        str[tam -1 -i] = c;
    }
    printf("str = %s\n", str);

    system("pause");
    return 0;
}