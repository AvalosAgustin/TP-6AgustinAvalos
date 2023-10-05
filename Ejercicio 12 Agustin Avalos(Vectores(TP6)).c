#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void compara_palindromo (char*palabra, int i, int l, int G,char*compara1)
{
	char r[30];
	int cambio=0,j=0;
	for(i=0;i<l;i++)
	{
		if (palabra[i] != ' ') 
		{
			r[j] = palabra[i];
			j++;
		}
		cambio=palabra[i];
		palabra[i]=palabra[G-i-1];
		palabra[G-i-1]=cambio;
		
	}
	
	if(strcmp(palabra,compara1)==0){
		printf("El texto ingresado es palindromo\n");
	}
	else{
		printf("El texto ingresado no es palindromo\n");
	}
	
	
	
}
int main(int argc, char *argv[]) 
{
	char palabra[30];
	char compara1[30];
	int i=0,l=0,G=0;
	
	printf("Ingrese una palabra\n");
	gets(palabra);
	
	printf("Su palabra ingresada es:%s\n",palabra);
	strcpy(compara1,palabra);
	G=strlen(palabra);
	l=G/2;
	compara_palindromo(palabra, i, l, G,compara1);
	
	
	
	return 0;
}

