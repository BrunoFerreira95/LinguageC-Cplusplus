#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fun��o principal
int main(){

    //Respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Vari�vel que recebe o resto da divis�o do n�mero por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //Vari�vel que recebe o resto da divis�o do n�mero por 3 (aleatorio entre 0 e 2)
    int aleatoriosegundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("%d\n", aleatorio);

    //Imprime o valor
    printf("%d\n", aleatoriosegundo);
    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
