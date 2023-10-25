/*Questão 02 [2,5 pontos]:
Desenvolver uma função recursiva que, dada uma
string s, altere-a de forma que as letras fiquem em
seu início e os demais caracteres ao final, como nos
exemplos a seguir:
Exemplo 1:
Inicialmente: X*7D2SFH1
Ao final: XHFDS27*1

Exemplo 2:
Inicialmente: 1SUG47EFG
Ao final: GSUGFE741
Nota:
Para testar se determinado caracter de uma
string s é uma letra, pode-se utilizar a
seguinte expressão:
if ((toupper(s[i]) >= ‘A’) && (toupper(s[i]) <= ‘Z’))*/

#include<stdio.h>
#include<string.h>

int alterarStringRecursivo(char s1[],int i,int j,int k,char sAux[]);
void alterarString(char s1[]);



int main() {
    char string[20]={"X*7D2SFH1"};

    alterarString(string);
    printf("%s", string);
}

void alterarString(char s1[]) {
	char sAux[20];
    alterarStringRecursivo(s1, 0, 0, strlen(s1) - 1,sAux);
    strcpy(s1, sAux);

}

int alterarStringRecursivo(char s1[],int i,int j,int k,char sAux[]){
	
	
	if(i==strlen(s1)){
		sAux[i]='\0';
	return 0;
	}
	else{
		if ((toupper(s1[i]) >= 'A') && (toupper(s1[i]) <= 'Z')){
		sAux[j]=s1[i];
		j++;
	}
	else{
		sAux[k]=s1[i];
		k--;
	}
	i++;
	alterarStringRecursivo(s1,i,j,k,sAux);
	}

}
