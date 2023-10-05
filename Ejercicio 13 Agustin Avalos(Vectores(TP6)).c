#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void cambio_Mayusculas_o_Minuscula( char*palabra, int i)
{
	char r[30];
	int j=0,dif1='a'-'A',dif2='A'-'a';
	
	while(palabra[i])
	{
		if(palabra[i]>= 'a' && palabra[i]<='z'){
			palabra[i]=palabra[i]-dif1;
		}
		else
		   {
			if(palabra[i]>= 'A' && palabra[i]<='Z'){
				palabra[i]=palabra[i]-dif2;
			}
			
		}
		
		if (palabra[i] != ' ' && palabra[i]!='.') 
		{
			r[j] = palabra[i];
			j++;
		}
		
		i++;
	}
	if(palabra[0]>='a' && palabra[0]<='z')
	{
		printf("Su texto cambia a minuscula y es:%s",palabra);
		
	}
	else{
		printf("Su texto cambia a mayuscula y es:%s",palabra);
	}
	

}

int main(int argc, char *argv[]) 
{
	
	
	
	char palabra[30];
	int i=0;
	
	printf("Ingrese una palabra\n");
	gets(palabra);
	
	cambio_Mayusculas_o_Minuscula( palabra, i);
	
	return 0;
}

