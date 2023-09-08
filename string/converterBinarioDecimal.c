/*Questão 01:
Pede-se o desenvolvimento de uma função que, dada uma string representando um número binário (ou seja, contendo
apenas os caracteres 0 e 1), converta-o para a base decimal.
Notas:
? A função solicitada deverá chamar outra função que validará se a string representa um número binário. Se não
consistir em um número binário, o valor -1 deverá ser retornado; caso contrário, o número inteiro decimal
equivalente será retornado;
? Durante a leitura das questões da prova, será apresentado um exemplo que evidencie o processo de transformação
de um número binário em decimal.*/
#include<stdio.h>
#include<math.h>
#include<string.h>

#define TAM 20

int biParaDec(char s1[]);
int main(){
	char string[TAM];
	int resultado,numero;
	
	printf("Digite um numero binario:");
	fflush(stdin);
	gets(string);
	
	resultado=biParaDec(string);
	
	if(resultado==-1){
		printf("A string não representa um numero binario!");
	}
	else{
		printf("Numero em decimal: %d",resultado);
	}
}

int biParaDec(char s1[]){
	int i, resultado=0,j=0;
	
	for(i=strlen(s1)-1;i>=0;i--){
		if(s1[i]=='1'){
			resultado+= pow(2,j);
		}
		else if(s1[i]!='0'){
			return -1;			
		}
		j++;
	}
	
	return resultado;
	printf("Resultado:%d",resultado);
}
