/*Quest�o 04:
Dada uma matriz MLxC, onde L e C s�o constantes, desenvolver uma fun��o que verifique se os elementos da matriz est�o
ordenados de forma crescente. Para isto, as seguintes regras devem ser atendidas:
a. Os elementos de cada linha devem estar ordenados crescentemente (ou seja, cada elemento ser� maior ou igual
�quele da mesma linha, por�m da coluna anterior � caso exista);
b. O primeiro elemento de cada linha deve ser maior ou igual ao �ltimo da linha anterior (caso exista).
Caso a matriz M atenda aos crit�rios definidos, o valor 1 dever� ser retornado pela fun��o; caso contr�rio, 0.*/

#include<stdio.h>

#define L 3
#define C 3


void exibirMatriz(int m[L][C]);
int verificarCrescente(int m[L][C]);

int main(){
	int matriz[L][C]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	
	int retorno;
	
	exibirMatriz(matriz);
	
	retorno=verificarCrescente(matriz);
	printf("%d",retorno);
}

void exibirMatriz(int m[L][C]){
	int i,j;
	
	printf("\nElementos da matriz:\n\n");
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}

int verificarCrescente(int m[L][C]){
	int i,j;
	
	for(i=0;i<L;i++){
		
		for(j=0;j<C-1;j++){
			
			if(i==0){ //verifica a primeira linha
				if(m[i][j]>m[i][j+1]){ //compara os elementos da mesma linha
					return 0;
				}
			}
			
			else{ //verifica as demais linhas
				if(m[i][j]<m[i-1][C-1]){ //compara o primeiro elemento com o �ltimo da linha anterior
					return 0;
				}
				if(m[i][j]>m[i][j+1]){ //compara os elementos da mesma linha
					return 0;
				}
			}
			
		}
	}
	
	return 1;
}

