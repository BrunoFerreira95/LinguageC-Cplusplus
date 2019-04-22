#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};

int main(){

    //Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'A';
    strcpy(primeiraPalavra.texto,"palavrinha");

    //Mostrando os valores do struct
    printf("Ordem: %d, Letra: %c, Palavra: %s", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);

    //Fazendo uma lista de struct
    struct palavra listaDePalavra[3];

    //Modificando os campos
    listaDePalavra[0].ordem = 0;
    listaDePalavra[1].ordem = 1;
    listaDePalavra[2].ordem = 2;
    listaDePalavra[0].letra = 'a';
    listaDePalavra[1].letra = 'b';
    listaDePalavra[2].letra = 'c';
    strcpy(listaDePalavra[0].texto,"Subindo");
    strcpy(listaDePalavra[1].texto,"Descendo");
    strcpy(listaDePalavra[2].texto,"Avante!");

    //Exibindo a lista de palavras
    int i;
    for(i = 0; i < 3;i++){
        printf("\nOrdem: %d, Letra: %c, Palavra: %s", listaDePalavra[i].ordem, listaDePalavra[i].letra, listaDePalavra[i].texto);
    }
    return 0;
}
