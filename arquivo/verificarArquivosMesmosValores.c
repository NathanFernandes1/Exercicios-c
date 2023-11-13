/*Questão 04 [2,5 pontos]:
Pede-se uma função que, dados dois arquivos textos,
contendo números inteiros, determine se possuem os
mesmos valores, independente do número de
ocorrências de cada número nos arquivos.*/

#include<stdio.h>

int verificaIgualdadeValores(char nomeArq1[],char nomeArq2[]);
int lendoArquivo2(char nomeArq2[],int numero);

int main(){
	char nomeArquivoA[100]="arquivoA.txt";
	char nomeArquivoB[100]="arquivoB.txt";
	
	if (verificaIgualdadeValores(nomeArquivoA,nomeArquivoB)==0&&verificaIgualdadeValores(nomeArquivoB,nomeArquivoA)==0){
		printf("Os arquivos possuem os mesmos valores");
	}
	else{
		printf("Os arquivos NAO possuem os mesmos valores");
	}
}
int verificaIgualdadeValores(char nomeArq1[],char nomeArq2[]){
	FILE *arq1;
	int numero;
	
	arq1 = fopen (nomeArq1, "r");
	
	if (!arq1){
		return -1;	//representando que houve erro
	}
	else{
		
		while (fscanf (arq1, "%d", &numero) != EOF){
			
			if(lendoArquivo2(nomeArq2,numero)==1){
				fclose(arq1);
				return 1;
			}
		}
	}
	fclose(arq1);
	return 0;
}

int lendoArquivo2(char nomeArq2[],int numero){
	FILE *arq2;
	int num;
	
	arq2 = fopen (nomeArq2, "r");
	
	if (!arq2){
		return -1;	//representando que houve erro
	}
	else{
		
		while (fscanf (arq2, "%d", &num) != EOF){
			
			if(num==numero){
				fclose(arq2);
				return 0;
			}
		}
		fclose(arq2);
		return 1;
	}
}
