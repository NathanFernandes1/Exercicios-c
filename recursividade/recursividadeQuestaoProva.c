/*Desenvolver uma função recursviva que,
dado um vetor de inteiros de tamanho TAM,
preencha as suas posições com os valores de TAM
(na posição 0) a 1 (posição TAM-1).*/

#include<stdio.h>
#define TAM 11

int preencherVetor(int vet[],int tamanho);
int	preencherVetorRecursivo(int vet[],int tamanho,int i);
void exibirVetor(int vet[],int tamanho);

int main(){
	int vetor[TAM],i;
	
	preencherVetor(vetor,TAM);
	exibirVetor(vetor,TAM);
	
}

int preencherVetor(int vet[],int tamanho){
	
	preencherVetorRecursivo(vet,tamanho,0);
}
int	preencherVetorRecursivo(int vet[],int tamanho,int i){
	if(i==tamanho){
		return 0;
	}
	else{
		vet[i]=tamanho-i;
		preencherVetorRecursivo(vet,tamanho,i+1);
	}
}
void exibirVetor(int vet[],int tamanho){
	int i;
	
	for(i=0;i<tamanho;i++){
		printf("%d ",vet[i]);
	}
}
