/*Questão 04:
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.*/

#include<stdio.h>

int removerCaracter(char s1[], int ca);
int main(){
	
	char string[20],caracter;
	
	printf("Digite a string:");
	fflush (stdin);
    gets(string);
	
	printf("Digite o caracter a ser removido:");
	scanf("%c",&caracter);
    
    removerCaracter(string,caracter);
    
    printf("string:%s",string);
}

int removerCaracter(char s1[], int ca){
	int i,j;
	
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]==ca){
			for(j=i;s1[j]!='\0';j++){
				s1[j]=s1[j+1];
			}
		}
	}
}
