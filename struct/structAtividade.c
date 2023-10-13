/*Considere a existência de um vetor V1 de inteiros, contendo quant elementos. Implementar uma função que, dado o
vetor V1, preencha um vetor V2, do qual cada posição consistirá em um struct com os seguintes campos:
? valor: cada valor do vetor V1;
? ocorrencias: quantidade de ocorrências deste valor em V1;
? posicao: posição da primeira ocorrência do valor em V1.
Exemplo:

V1 4 9 5 1 1 2 4 8 5 4  quant = 10
   0 1 2 3 4 5 6 7 8 9

valor: cada valor do vetor V1;
ocorrencias: quantidade de ocorrências deste valor em V1;
posicao: posição da primeira ocorrência do valor em V1.

V2
4 9 5 1 2 8  campo valor
3 1 2 2 1 1  campo ocorrencia
0 1 2 3 5 7  campo posicao
0 1 2 3 4 5 6 7 8 9

Nota: além da função solicitada, deve ser apresentada a declaração do tipo que representa o struct citado.*/

#include<stdio.h>
#define TAM 10

	typedef struct{
		int valor;
		int ocorrencias;
		int posicao;
}Tstruct;

int obterDados(int vet1[], Tstruct vet2[], int tamanho);
void exibirVetorStruct(Tstruct vet2[], int tamVet2);
void exibirVetor(int vet1[], int tamanho);

int main (){
	int vetor1[TAM]={4,9,5,1,1,2,4,8,5,4},tamanhoVet2;
	Tstruct vetor2[TAM];
	
	printf("Elementos do vetor 1:\n\n");
	exibirVetor(vetor1,TAM);
	
	tamanhoVet2=obterDados(vetor1,vetor2,TAM);
	
	printf("\n\nElementos do vetor 2:\n\n");
	exibirVetorStruct(vetor2,tamanhoVet2);
}

int obterDados(int vet1[], Tstruct vet2[],int tamanho){
	int i,valida=1,j,k=1,cont=0;
	
	vet2[0].valor=vet1[0];
	vet2[0].posicao=0;
	for(i=1;i<tamanho;i++){
		for(j=0;j<k;j++){
			if(vet1[i]==vet2[j].valor){
				valida=0;
				break;
			}
			
		}
		 if(valida==1){
				vet2[k].valor=vet1[i];
				vet2[k].posicao=i;
				k++;
			}
			valida=1;
	}
	
	for(i=0;i<k;i++){
		for(j=0;j<tamanho;j++){
			if(vet2[i].valor==vet1[j]){
				cont++;
			}
			
		}
		vet2[i].ocorrencias=cont;
			cont=0;
	}
	
	return k;
	
}
void exibirVetorStruct(Tstruct vet2[], int tamVet2){
	int i,j;
	
	for(i=0;i<tamVet2;i++){
		printf("%d ",vet2[i].valor);
	}
	printf(" <-Campo valor\n");
	
	
	for(i=0;i<tamVet2;i++){
		printf("%d ",vet2[i].ocorrencias);
	}
	printf(" <-Campo ocorrencia\n");
	
	
	for(i=0;i<tamVet2;i++){
		printf("%d ",vet2[i].posicao);
	}
	printf(" <-Campo posicao\n");
}

void exibirVetor(int vet1[], int tamanho){
	int i;
	
	for(i=0;i<tamanho;i++){
		
		printf("%d ",vet1[i]);
	}
}
