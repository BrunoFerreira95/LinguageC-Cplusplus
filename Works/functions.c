//Função de alucao dinamica para o tamanho do vetor
int* alocaVetor(int tamanho){
    //É cria um ponteiro auxiliar
    int *aux;

    //Alocação dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição de momoria do vetor alocado
    return aux;

}

//Função para zerar o vetor
void menzerar(int tamanho, int* vetor)
{
	int i;
	for(i = 0; i < tamanho; i++)
		vetor[i] = 0;
}

//Função para alucar na memoria principal
int alocarmenprinc(int tamanho, int* vetor)
{
	int i, x, validacao = 0;
	printf("Codigo para alocar:");
	scanf("%d", &x);
	for(i=0;i<tamanho;i++)
		if(vetor[i]==0)
		{
			vetor[i]=x;
			validacao = 1;
			break;
		}
    return validacao;
}

//Função para fazer swap out ou in
int swap(int tamanho, int* vetor, int* vetorsegundario)
{
	int i, j, k, x, aux, validacao = 0;
	printf("Codigo do processo:");
	scanf("%d",&x);
	for(i=0;i<tamanho;i++)
	    if(vetor[i]==x)
	    {
	        aux = vetor[i];
	        for(j = 0; j < tamanho; j++)
        	    if(vetorsegundario[j] == 0)
        	    {
        	        vetorsegundario[j] = aux;
        	        vetor[i] = 0;
        	        validacao = 1;
        	        break;
        	    }
	        break;
	    }
    return validacao;
}

//Função para lista a memoria
void listar(int tamanho, int* vetor, char* frase)
{
	int i;
	for(i = 0; i < tamanho; i++)
	{
		printf("%s [%d] = %d\n",frase, i, vetor[i]);
	}
}
