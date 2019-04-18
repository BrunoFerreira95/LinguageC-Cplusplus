#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main(){
    //definindo uma variavel
    int a = 5, b;

    //imprimindo a variavel "a"
    printf("%d", a);

    //concatenando
    printf("O valor da var a eh: %d\n", a);

    //mudando o valor de a
    a = 15;

    //concatenando
    printf("O valor da var a eh: %d\n",a);

    //lendo valores
    scanf("%d", &b);

    //concatenando
    printf("O valor da var a eh: %d\n",b);

    //pula linhas
    printf("\n");

    //imprime na tela
    printf("\nUhuu");

    //pause o programa apos executar
    system("pause");

}
