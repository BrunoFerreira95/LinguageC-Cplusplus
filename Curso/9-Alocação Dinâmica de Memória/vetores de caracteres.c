#include <stdio.h>
#include <stdlib.h>a


//Fun��o principal
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
    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
