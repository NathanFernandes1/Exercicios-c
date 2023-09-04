/*Questão 05:
Desenvolver uma função que receba duas matrizes de inteiros, ambas de ordem 10, com as seguintes características:
a. M1: matriz contendo números inteiros quaisquer;
b. M2: matriz contendo apenas os valores 0 ou 1.
Desenvolver uma função que a partir destas matrizes gere a matriz M3, também de ordem 10, cujos elementos são
definidos da seguinte forma:
M2ij = 0 ? M3ij = M1ij
M2ij = 1 ? M3ij = soma dos elementos da linha i com os da coluna j da matriz.*/

#include<stdio.h>

#define L 3
#define C 3

int gerarMatriz3(int m1[L][C],int m2[L][C],int m3[L][C]);
int somaElementos(int m1[L][C], int linha, int coluna);
int exibirMatriz(int m3[L][C]);
int main(){
   int matriz[L][C] ={
       {1,2,3},
       {4,5,6},
       {7,8,9}
};

int matriz2[L][C] ={
       {1,0,1},
       {0,1,0},
       {1,0,1}
};

int matriz3[L][C];

printf("Matriz 1:\n\n");
exibirMatriz(matriz);

printf("Matriz 2:\n\n");
exibirMatriz(matriz2);

gerarMatriz3(matriz,matriz2,matriz3);

printf("Matriz 3:\n\n");
exibirMatriz(matriz3);
}

int gerarMatriz3(int m1[L][C],int m2[L][C],int m3[L][C]){
    int i,j;
    
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            if(m2[i][j]==0){
                m3[i][j]=m1[i][j];
            }
            else{
            m3[i][j]=somaElementos(m1,i,j);
            }
            
           
        }
    }
}
int somaElementos(int m1[L][C], int linha, int coluna){
    int soma=0,i,j;
    
    //Somando elementos da linha
    for(i=0;i<C;i++){
        soma+= m1[linha][i];
    }
    for(i=0;i<L;i++){
        soma+= m1[i][coluna];
    }
    
    return soma;
    
}

int exibirMatriz(int m3[L][C]){
    int i,j;
    
    for(i=0;i<L;i++){
        
        for(j=0;j<C;j++){
            
            printf("%5d",m3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}


