/*Questão 02 [2,5 pontos]:
Considerando a existência de um arquivo A contendo números inteiros positivos, um por linha, pede-se a
implementação de uma função que crie um segundo arquivo, B, com as seguintes características:
? Para cada valor de A, escrever em B uma linha com todos os seus divisores;
? Para cada elemento do primeiro arquivo, apenas uma linha de divisores deve ser inserida em B.*/

#include<stdio.h>

int criarArqB(char nomeArqA[],char nomeArqB[]);
int preenchendoArqB(char nomeArqB[], int numero );
int lendoArquivoAux(char nomeArqAux[],int numero);
int main(){
	char nomeArquivoA[100]="arquivoA.txt";
	char nomeArquivoB[100]="arquivoB.txt";
	
	criarArqB(nomeArquivoA,nomeArquivoB);
}

int criarArqB(char nomeArqA[],char nomeArqB[]){
	char nomeArqAux[100]="arquivoAux.txt";
	int numero,cont=0;
	FILE *arqA,*arqAux;
	
	arqA = fopen (nomeArqA, "r");
	arqAux = fopen (nomeArqAux, "a");
	
	if (!arqA||!arqAux){
		return -1;	//representando que houve erro
	}
	else{
		while (fscanf (arqA, "%d", &numero) != EOF){
				
				if(cont==1){
				
					if (lendoArquivoAux(nomeArqAux,numero)==0){
						
						preenchendoArqB(nomeArqB,numero );
					}
				}
				else{
					preenchendoArqB(nomeArqB,numero );
				}
				
				
				if(cont==0){
				cont=1;
			}
				fprintf (arqAux, "%d\n", numero);
				
				rewind(arqAux);
			}
			
			fclose (arqAux);
			fclose (arqA);
			
			if (remove(nomeArqAux) != 0) {
      		 printf("Erro ao remover o arquivo");
    	} 
			return 1;
	}
}

int lendoArquivoAux(char nomeArqAux[],int numero){
	FILE *arqAux;
	int num;
	
	arqAux = fopen (nomeArqAux, "r");
	
	if (!arqAux){
		return -1;	//representando que houve erro
	}
	else{
		while (fscanf (arqAux, "%d", &num) != EOF)
		{
			
			if(numero==num){
			fclose (arqAux);
			return 1;
			
		
		}
		
		
	
	}
		
}
fclose (arqAux);
		return 0;
}
int preenchendoArqB(char nomeArqB[], int numero ){

	FILE *arqB;
	int i;
	
	arqB = fopen (nomeArqB, "a");
	
	if (!arqB){
		printf("3");
		return -1;	//representando que houve erro
	}
	else{
	for(i=1;i<=numero;i++){
			
			if(numero%i==0){
				
				fprintf (arqB, "%d ", i);
			}
				
		}
		fprintf (arqB, "\n");
		fclose (arqB);
			return 1;
	}
}
