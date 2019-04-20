#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Declarando que a função existe
bool retornaBooleano();

//Função principal
int main(){

    //Definindo variavel tipo booleana
    bool variavelBooleana;

    //Char passando o retorno da função booleano
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro!\n");
    }//Senao, executa o segundo bloco
    else{
        printf("Eh falso\n");
    }


    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}

//Função que retorna x
bool retornaBooleano(){
    return true;
}
