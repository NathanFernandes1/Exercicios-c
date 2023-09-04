/*QUESTÃO 02:
Desenvolver uma função que, dada uma matriz
M15×20, determine se um número X se encontra
na linha L da matriz.*/

#include<stdio.h>
#define L 3
#define C 3

int procurarNumero(int m[L][C], int num, int linha);
int main (){
	int numero, linha;
	int matriz[L][C] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 3}
    };
    
    printf("Digite o numero a ser encontrado:");
    scanf("%d",&numero);
    
    printf("Digite uma linha da matriz:");
    scanf("%d",&linha);
    
    if(procurarNumero(matriz,numero,linha)==0){
    	printf("Numero nao encontrado!");
	}
	else if (procurarNumero(matriz,numero,linha)==-1){
		printf("Esta linha nao existe!");
	}
	else{
		printf("Numero encontrado!");
	}
}

int procurarNumero(int m[L][C], int num, int linha){
	int i;
	
	if(linha>=L||linha<0){
		return -1;
	}
	for(i=0;i<C;i++){
		
		if(num== m[linha][i]){
			return 1;
		}
	}
	return 0;
	
}
