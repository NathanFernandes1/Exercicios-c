/*Quest�o 01:
Pede-se o desenvolvimento de uma fun��o que, dada uma string representando um n�mero bin�rio (ou seja, contendo
apenas os caracteres 0 e 1), converta-o para a base decimal.
Notas:
? A fun��o solicitada dever� chamar outra fun��o que validar� se a string representa um n�mero bin�rio. Se n�o
consistir em um n�mero bin�rio, o valor -1 dever� ser retornado; caso contr�rio, o n�mero inteiro decimal
equivalente ser� retornado;
? Durante a leitura das quest�es da prova, ser� apresentado um exemplo que evidencie o processo de transforma��o
de um n�mero bin�rio em decimal.*/
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
		printf("A string n�o representa um numero binario!");
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
