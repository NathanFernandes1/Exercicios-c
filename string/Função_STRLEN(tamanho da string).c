#include<stdio.h>

int tamanhoString(char s1[]);

int main(){
	
	char string[20];
	
	printf("Digite a string:");
	fflush (stdin);
    gets(string);
	
	tamanhoString(string);
	
	printf("Tamanho da String: %d",tamanhoString(string));
	
}

int tamanhoString(char s1[]){
	int i=0;
	
	
	while(s1[i]!='\0'){
		i++;
	}
	return i;
}
