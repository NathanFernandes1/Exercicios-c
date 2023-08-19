/*Questão 01:
Implementar uma função que, dada uma string
s, determine a quantidade de caracteres 
distintos em s.*/
#include <stdio.h>
#include <string.h>

int caracteresDistintos(char s[], char sAux[]);
int main(){
	char string[20],stringAuxiliar[20];
	
	printf("Digite a primeira string:");
	fflush (stdin);
    gets(string);
    
    printf("Quantidade de caracteres distintos %d", caracteresDistintos(string,stringAuxiliar));
    
}

int caracteresDistintos(char s[], char sAux[]){
	int i,j,cont=0,validador=0;
	
	for(i=0;i<strlen(s);i++){
		
		for(j=0;j<=cont;j++){
			
			if (s[i]==sAux[j]){
				validador=1;
				break;
			}
			
		}
		
		if(validador==0){
			cont++;
			sAux[cont]=s[i];
		}
		else{
			validador=0;
		}
		
	}
	
	return cont;
}
