#include <stdio.h>

//Funcao principal do programa
int main()
{
    //Definindo variaveis
    int a = 10;

    //Conectivo Logico e (AND) / Se uma comparacao for falsa nao entra no bloco
    if(a > 5 && a < 15){
        printf("\nA variavel 'a' esta entre 5 e 15");
    }

    //Conectivo Logico ou (OR) / Se uma comparacao for verdadeira ja entra no bloco
    if(a > 5 || a < 15){
        printf("\nA variavel 'a' eh maior 5 ou 15");
    }

    //Misturando Conectivo
    if((a > 5 && a < 15) || a == 20){
        printf("\nA variavel 'a' esta entre 5 e 15 ou eh igual a 20");
    }

    //Fecha o programa
    return 0;
}

