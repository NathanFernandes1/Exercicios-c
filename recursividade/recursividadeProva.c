/*Questão 04 [2,5 pontos]:
Desenvolver uma função recursiva que, dados um 
vetor com quant inteiros e dois números num1 e num2, 
calcule a média dos valores do vetor que estão no 
intervalo de num1 a num2, inclusive.*/

#include<stdio.h>
#define TAM 6

float mediaVetor(int vet[],int tamanho,int num1,int num2);
float mediaRecursivo(int vet[],int tamanho,int num1,int num2,int i,int validador,int cont,int soma);
int main(){
	int vetor[TAM]={5,10,15,20,25,30};
	int numero1=10,numero2=25;
	float media;
	
	media=mediaVetor(vetor,TAM,numero1,numero2);
	
	printf("Media: %.2f",media);
}

float mediaVetor(int vet[],int tamanho,int num1,int num2){
	return mediaRecursivo(vet,tamanho,num1,num2,0,0,0,0);

}
float mediaRecursivo(int vet[],int tamanho,int num1,int num2,int i,int validador,int cont,int soma){
	
	if(validador==1){
		if(vet[i]==num2){
			soma+=vet[i];
			cont++;
			printf("%d ",soma);
			return (float)soma/cont;
		}
		else{
			soma+=vet[i];
			printf("%d ",soma);
			return mediaRecursivo(vet,tamanho,num1,num2,i+1,validador,cont+1,soma);
		}
			
	}
	else if(vet[i]==num1){
		
			soma+=vet[i];
			printf("%d ",soma);
			return mediaRecursivo(vet,tamanho,num1,num2,i+1,1,cont+1,soma);
	}
	else{
		printf("%d ",soma);
		    return mediaRecursivo(vet,tamanho,num1,num2,i+1,validador,cont,soma);
	}
}
