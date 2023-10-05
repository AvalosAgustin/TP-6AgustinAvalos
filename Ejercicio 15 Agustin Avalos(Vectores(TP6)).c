#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int Vocal_A(char*palabra, int l)
{
	int cont1=0,i;
	
	for(i=0;i<l;i++)
	{
		if(palabra[i]=='a' || palabra[i]=='A')
		{
			
			cont1=cont1+1;
		}
	}
	return cont1;
}
int Vocal_E(char*palabra, int l)
{ 
	
		
	int cont2=0,i;
	for(i=0;i<l;i++)
	{
		if(palabra[i]=='e' || palabra[i]=='E')
		{
			cont2=cont2+1;
		}
	}
	return cont2;
}

int Vocal_I(char*palabra, int l){
	int cont3=0,i;
	
	for(i=0;i<l;i++)
	{
		if(palabra[i]=='i' || palabra[i]=='I')
		{
			cont3=cont3+1;
			
		}
	}
	return cont3;
}
int Vocal_O(char*palabra, int l)
{
	int cont4=0,i;
	for(i=0;i<l;i++)
	{
		if(palabra[i]=='o' || palabra[i]=='O')
		{
			cont4=cont4+1;
			
		}
	}
	return cont4;
}
int Vocal_U(char*palabra, int l)
{
	int cont5=0,i;
	for(i=0;i<l;i++)
	{
		if(palabra[i]=='u' || palabra[i]=='U'){
			cont5=cont5+1;
		}
	}
	return cont5;
}

int main(int argc, char *argv[]) 
{
	char palabra[30];
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	int G=0,l;
	printf("Ingrese un texto o una palabra\n");
	gets(palabra);
	G=strlen(palabra);
	l=G;
	
	contA = Vocal_A(palabra, l);
	contE = Vocal_E(palabra, l);
	contI = Vocal_I(palabra,l);
	contO = Vocal_O(palabra, l);
	contU = Vocal_U(palabra, l);

	printf("La cantidad de veces que se repitio cada vocal son:\n");
	printf("Vocal A:%d\n",contA);
	printf("Vocal E:%d\n",contE);
	printf("Vocal I:%d\n",contI);
	printf("Vocal O:%d\n",contO);
	printf("Vocal U:%d\n",contU);
	return 0;
}

