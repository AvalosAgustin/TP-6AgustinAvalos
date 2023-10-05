#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Invertida_palabra (char*palabra, int i, int l, int G)
{

	int cambio=0;
	for(i=0;i<l;i++)
	{
		
		
		cambio=palabra[i];
		palabra[i]=palabra[G-i-1];
		palabra[G-i-1]=cambio;
		
	}
	printf("\nSu palabra invertida es:%s\n",palabra);
	
	
}
int main(int argc, char *argv[]) 
{
	char palabra[30];
	
	int i=0,l=0,G=0;
	
	printf("Ingrese una palabra\n");
	gets(palabra);
	
	printf("Su palabra ingresada es:%s\n",palabra);
	G=strlen(palabra);
	l=G/2;
	Invertida_palabra(palabra, i, l, G);
	
	
	
	return 0;
}

