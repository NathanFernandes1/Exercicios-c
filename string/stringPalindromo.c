/*Quest�o 02:
Dada uma string s, desenvolver uma fun��o
que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo
quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da
esquerda para direita ou vice-versa.*/
#include<stdio.h>
#include<string.h>

int verificarPalindromo(char s1[], int quantC);
int main(){
	
	int quantCaracteres;
	char string[20];
	
	printf("Digite a string:");
	fflush (stdin);
    gets(string);
	
	quantCaracteres = strlen(string);
	
	printf("QUANTIDADE %d",quantCaracteres);
	if (verificarPalindromo(string,quantCaracteres)==1){
		printf("A string nao e um palindromo.");
	}
	else{
		printf("A string e um palindromo");
	}
	
	
}

int verificarPalindromo(char s1[], int quantC){
	int i=0, j=quantC-1;
	
	while(j>i){
		if(s1[i]!=s1[j]){
			return 1;
		}
		i++;
		j--;
	}
	return 0;
}
