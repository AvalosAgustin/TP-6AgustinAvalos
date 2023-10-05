#include <stdio.h>
#include <stdlib.h>


void comparacion(int cont1, int cont2)
{
	
	
	if(cont1==1)
	{
		printf("El orden en la que se ingreso los numeros es ascendente\n");
	}
	else
	{
		if(cont2==1)
		{
			printf("El orden en la que se ingreso los numeros es descendente\n");
		}
		else
		{
			printf("El orden en la que se ingreso los numeros es desordenado\n");
		}
	}
	
	
}

int main(int argc, char *argv[]) 
{
	int num[7];
	int i,j=1,l=1,k,M=0,cont1=1,cont2=1;
	
	for(i=0;i<7;i++)
	{
		printf("Ingrese un numero%d(Entero)\n",j);
		scanf("%d",&num[i]);
		if(M<num[i])
		{
			
			M=num[i];
		}
		j++;
	}
	
	for(l=0;l<6;l++)
	{
		if (num[l] > num[l + 1])
		{
			
			cont1 = 0; 
			
		}
		else 
		{
			if (num[l] < num[l + 1])
			{
				
				cont2 = 0; 
			}
		}
		
	}
	j=1;

	comparacion(cont1,cont2);
	
	printf("El numero mayor es:%d\n",M);
	
	for(k=0;k<i;k++)
	{
		printf("El numero %d Ingresado es:%d\n",j,num[k]);
		j++;
	}
	
	
	return 0;
}

