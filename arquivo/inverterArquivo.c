/* Atividade 4:
Implementar uma função que, dado um
arquivo texto A contendo números inteiros, um
por linha, cria um novo arquivo texto, B,
contendo os mesmos valores de A, porém em
ordem inversa.*/

#include<stdio.h>

int criarNovoArqInvertido(char nomeArqA[],char nomeArqB[], int quant);
int quantNumArquivo(char nomeArqA[]);
int main(){
	char nomeArquivoA[100]="arquivoA.txt";
	char nomeArquivoB[100]="arquivoB.txt";
	int quantidade;
	
	quantidade=quantNumArquivo(nomeArquivoA);
	criarNovoArqInvertido(nomeArquivoA,nomeArquivoB,quantidade);
}

int quantNumArquivo(char nomeArqA[]){
	FILE *arqA;
	
	int numero,cont=0;
	
	arqA = fopen (nomeArqA, "r");
	
	if (!arqA){
		return -1;	//representando que houve erro
	}
	else{
			while (fscanf (arqA, "%d", &numero) != EOF){
				cont++;
			}
	}
//	printf("CONT%d",cont);
	fclose(arqA);
	return cont;
}
int criarNovoArqInvertido(char nomeArqA[],char nomeArqB[],int quant){
	FILE *arqA,*arqB;
	
	int numero,cont=0;
	
	arqA = fopen (nomeArqA, "r");
	arqB = fopen (nomeArqB, "w");
	
	if (!arqA){
		return -1;	//representando que houve erro
	}
	else{
			while (fscanf (arqA, "%d", &numero) != EOF){
				cont++;
				if(cont==quant&&quant>0){
					fprintf (arqB, "%d\n", numero);
					quant--;
					cont=0;
					rewind(arqA);
				}
				else if(quant<=0){
					break;
				}
			}
			fclose(arqA);
			fclose(arqB);
	}
	
}
