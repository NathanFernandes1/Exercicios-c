#include<stdio.h>

int compararStrings(char s1[], char s2[]);

int main(){
	
	char string[20],string2[20];
	
	printf("Digite a primeira string:");
	fflush (stdin);
    gets(string);
    
    printf("Digite a segunda string:");
	fflush (stdin);
    gets(string2);
    
    if(compararStrings(string,string2)==0){
    	printf("As strings sao iguais");
	}
	else{
		printf("As strings nao sao iguais");
	}
    
    

}

int compararStrings(char s1[], char s2[]){
	int i=0;
	
	while(s1[i]!='\0' && s2[i]!='\0'){
		if(toupper(s1[i])!=toupper(s2[i])){
			return 1;
		}
		i++;
	}
	return 0;
}
