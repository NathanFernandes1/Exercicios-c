/*Questão 09:
Desenvolver uma função recursiva que, dado
um vetor V com quant números inteiros,
determine se seus elementos estão dispostos
de maneira a representar uma progressão
aritmética.*/

#include<stdio.h>
#define TAM 11

int verificarPa(int vet[],int tamanho);
int verificarPaRecursivo(int vet[],int tamanho,int r,int i);
int main(){
	int vetor[TAM]={5,10,15,20,25,30,35,40,45,50,55};
	int i;
	
	if (verificarPa(vetor,TAM)==1){
		printf("O vetor e uma PA");
	}
	else{
		printf("O vetor NAO e uma PA");
	}
}

int verificarPa(int vet[],int tamanho){
	int r;
	r=vet[1]-vet[0];
	
	return verificarPaRecursivo(vet,tamanho,r,2);
}

int verificarPaRecursivo(int vet[],int tamanho,int r,int i){
	if(i!=tamanho-1){
		if((vet[i+1]-vet[i])==r){
			 return verificarPaRecursivo(vet,tamanho,r,i+1);
		}
		else{
			return 0;
		}
	}
	else{
		return 1;
	}
}
