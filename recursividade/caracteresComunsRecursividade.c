#include <stdio.h>
#include <string.h>

int caracterFoiContado(char s1[], char caracter, int i);
int caracteresComuns(char s1[], char s2[]);
int caracteresComunsRecursivo(char s1[], char s2[], int i, int j);
int percorrerS2(char s2[], char caracter,int j);

int main() {
    char string1[20], string2[20];
    
    printf("Digite a string 1: ");
    fflush (stdin);
    gets(string1);
    
    printf("Digite a string 2: ");
    fflush (stdin);
    gets(string2);
    
    int resultado = caracteresComuns(string1,string2);
    printf("Numero de caracteres distintos comuns: %d\n", resultado);

    return 0;
}

int caracteresComuns(char s1[], char s2[]) {
    return caracteresComunsRecursivo(s1,s2,0,0);
}

int caracteresComunsRecursivo(char s1[], char s2[], int i, int j) {
    int cont = 0,k=0;
    char caracter;
    if (s1[i] != '\0') {
        caracter = s1[i];
        if ((caracterFoiContado(s1,caracter,i))==0) {
            cont = percorrerS2(s2,caracter,k);
        }
        cont += caracteresComunsRecursivo(s1,s2,i+1,0);
    }
    return cont;
}

int percorrerS2(char s2[], char caracter,int k) {
    if (s2[k] == '\0') {
        return 0;
    } else if (caracter == s2[k]) {
        return 1;
    } else {
        return percorrerS2(s2,caracter,k+1);
    }
}

int caracterFoiContado(char s1[], char caracter, int i) {
	int j;
    for (j=0;j<i;j++) {
        if (s1[j] == caracter) {
            return 1;
        }
    }
    return 0;
}

