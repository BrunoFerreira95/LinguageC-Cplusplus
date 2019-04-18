#include <stdio.h>
//Função principal do programa
int main()
{
    //Difinindo variavel
    int a = 5,opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional simples
    if(a == 5){
        printf("A variavel a = 5");
    }
    if(b == 2.5){
        printf("\nA variavel b = 2.5");
    }
    if(c == 'x'){
        printf("\nA variavel c = x");
    }

    //Numero par ou impar
    if(a % 2 == 1){
        printf("\n A variavel a eh impar");
    }else{
        printf("\n A variavel a eh par");
    }
    //Condicional Composta
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao == 2){
        printf("\nA opcao = 2");
    }else{
        printf("\nA opcao nao eh igual a 1 e nem 2");
    }
    return 0;
}

