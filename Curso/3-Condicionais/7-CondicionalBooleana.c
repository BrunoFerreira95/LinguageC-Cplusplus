#include <stdio.h>
#include <stdbool.h>
int main()
{
    //Difinindo variaveis
    bool a = true, b = false;

    //Se A for verdadeiro
    if(a){
        printf("\nA eh verdadeiro");
    }

    //Comparando o B
    if(b){
        printf("\nB eh verdadeiro");
    }else{
        printf("\nB eh falso");
    }

    //Comparando uma falsidade
    if(!b){
        printf("\nB eh falso");
    }
    return 0;
}

