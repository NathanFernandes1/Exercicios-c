/*Questão 02:
Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não 
estejam em s2.
Nota: em s3, não devem existir caracteres 
repetidos*/
#include<stdio.h>
#include<string.h>

int naoIntersecao(char s1[], char s2[], char s3[]);
int main(){
	char string1[20],string2[20],string3[20];
	
	printf("Digite a primeira string:");
	fflush (stdin);
    gets(string1);
    
    printf("Digite a segunda string:");
	fflush (stdin);
    gets(string2);
    
    naoIntersecao(string1,string2,string3);
    
    printf("STRING 3= %s",string3);
}

int naoIntersecao(char s1[], char s2[], char s3[]){
	int i, j,k,validador=0,cont=0;
	
	for(i=0;i<strlen(s1);i++){
		
		for(j=0;j<strlen(s2);j++){
			
			if (s1[i]==s2[j]){
				validador=1;
				break;
			}
		}
		
		if(validador==0){
			
			for(k=0; k<=cont; k++){
				
				if (s1[i] == s3[k]){
					
					validador=1;
					break;
				}
			    
			}
				if(validador==0){
			
			    s3[cont]=s1[i];
			    cont++;
		}
		
		}
		
		validador=0;
		
	}
	
	s3[cont]='\0';
}

