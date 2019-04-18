#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função principal
int main(){

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variável que recebe o resto da divisão do número por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //Variável que recebe o resto da divisão do número por 3 (aleatorio entre 0 e 2)
    int aleatoriosegundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("%d\n", aleatorio);

    //Imprime o valor
    printf("%d\n", aleatoriosegundo);
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
