#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Declarando que a fun��o existe
bool retornaBooleano();

//Fun��o principal
int main(){

    //Definindo variavel tipo booleana
    bool variavelBooleana;

    //Char passando o retorno da fun��o booleano
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro!\n");
    }//Senao, executa o segundo bloco
    else{
        printf("Eh falso\n");
    }


    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}

//Fun��o que retorna x
bool retornaBooleano(){
    return true;
}
