/*QUESTÃO 04:
Fazer uma função que, dada uma matriz M6×6,
determine se ela é simétrica.*/

#include<stdio.h>

#define L 6
#define C 6

void exibirMatriz (int m[L][C]);
int verificarSimetria(int m[L][C]);
int main(){
	int matriz[L][C] = {
		{1, 2, 3, 4, 5, 6},
        {2, 7, 8, 9, 10, 11},
        {3, 8, 12, 13, 14, 15},
        {4, 9, 13, 16, 17, 18},
        {5, 10, 14, 17, 19, 20},
        {6, 11, 15, 18, 20, 21}
	};
	
	exibirMatriz(matriz);
	
	if(verificarSimetria(matriz)==0){
		printf("Matriz simetrica!");
	}
	else{
		printf("Matriz nao simetrica!");
	}
}

void exibirMatriz (int m[L][C]){
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			printf ("%5d ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}
int verificarSimetria(int m[L][C]){
	int i,j;
	
	
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			
			if(m[i][j]!= m[j][i]){
				return 1;
			}
		}
	}
	return 0;
}
