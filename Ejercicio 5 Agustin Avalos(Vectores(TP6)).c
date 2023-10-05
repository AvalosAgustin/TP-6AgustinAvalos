#include <stdio.h>

int pares(int num)
{
	int resultado,par;
	
	resultado=num%2;
	if(resultado==0 )
	{
		par=resultado;
		
	}	
	
	return par;

	
}
int impares(int num)
{
	int resultado,impar;
	
	resultado=num%2;
	
	
	if(resultado==1)
	{
		impar=resultado;
		
	}
	
	return impar;
	
}



int main() 
{
	
	int PR[20];
	int IP[20];
	int num,i=0,j=0,k,cont1=0,P,I,l=1,cont2=0,cont3=0;
	printf("Ingrese números enteros (0 para dejar de ingresar):\n");
	
	do
	{
		printf("Ingrese un numero%d\n",l);
		scanf("%d",&num);
		
		if(num!=0)
		{
			P= pares(num);
			
			
			if(P==0)
			{
				PR[i]=num;
				i++;
				cont2=1;
			}
			else
			{
				cont3=1;
				I=impares( num);
				if(I==1)
				{
					IP[j]=num;
					j++;
				}
			}
		}
		l++;
		cont1++;
	}while(num>0&& cont1<20);
    
	if(cont2==1)
	{
		printf("Los numeros pares son:\n");
		for(k=0;k<i;k++)
		{
			printf("%d\n",PR[k]);
			
		}
		if(cont3==0)
		{
			printf("No se ingreso ningun numero impar\n");
			
		}
	}
	if(cont3==1)
	{
		printf("Los numeros impares son:\n");
		for(k=0;k<j;k++)
		{
			printf("%d\n",IP[k]);
			
		}
		if(cont2==0)
		{
			printf("No se ingreso ningun numero par\n");
			
		}
	}
	
	
	
	return 0;
}

