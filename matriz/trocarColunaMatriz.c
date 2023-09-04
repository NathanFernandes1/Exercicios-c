/*Questão 02:
Dada uma matriz MLxC, onde L e C são constantes, desenvolver uma função que “troque” os elementos de duas colunas
c1 e c2, respeitadas as seguintes regras:
a. A troca só será possível se as colunas c1 e c2 existirem na matriz. Caso existam, a troca será realizada e o valor 1
retornado pela função; por outro lado, 0 será retornado se uma ou as duas colunas forem inválidas;
b. Após a troca, a coluna c2 conterá exatamente os elementos originais da coluna c1, na mesma ordem. Porém, os
valores da coluna c1 serão os originais da c2, na ordem inversa.*/

#include<stdio.h>
#include<time.h>

#define L 5
#define C 5

void preencherMatriz(int m[L][C]);
void exibirMatriz(int m[L][C]);
int trocarColuna(int m[L][C],int col1,int col2);

int main(){
	int matriz[L][C],coluna1,coluna2;
	
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	
	printf("\n\nDigite a primeira coluna:");
	scanf("%d",&coluna1);
	
	printf("\n\nDigite a segunda coluna:");
	scanf("%d",&coluna2);
	
	if(trocarColuna(matriz,coluna1,coluna2)==1){
		printf("\n\nTroca realizada com sucesso!\n\n");
		
		exibirMatriz(matriz);
	}
	else{
		printf("Coluna(s) invalida(s)!");
	}
	
	
}

void preencherMatriz (int m[L][C]){
	int i, j;
	
	srand (time(NULL));
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100;
		}
	}
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

int trocarColuna(int m[L][C],int col1,int col2){
	int i,j=L-1,vetAux[L];
	
	if(col1<0||col1>=C||col2<0||col2>=C){
		return 0;
	}
	//Quardando os dados da primeira coluna em um vetor auxiliar
	for(i=0;i<L;i++){
		vetAux[i]= m[i][col1];
	}
	
	for(i=0;i<L;i++){
		m[i][col1]= m[j][col2];
		m[j][col2]=vetAux[j];
		j--;
	}
	return 1;
}
