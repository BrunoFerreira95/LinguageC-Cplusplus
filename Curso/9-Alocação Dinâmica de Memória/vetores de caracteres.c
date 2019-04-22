#include <stdio.h>
#include <stdlib.h>a


//Função principal
int main(){

    //Definindo variaveis
    int *vetor[4],i;
    char frase[] = "Nova frase";

    for(i = 0; i < 4; i++){
        vetor[i] = frase;
    }

    for(i = 0; i < 4; i++){
        printf("%d\n", vetor[i]);
    }
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
