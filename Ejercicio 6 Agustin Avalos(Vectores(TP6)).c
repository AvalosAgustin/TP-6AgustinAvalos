#include <stdio.h>
#include <stdlib.h>

 void Comparacion_Mostrar(int*num, int i, int maximo,int minimo)
 {
	int  cont1=0,cont2=0;
	for(i=0;i<10;i++)
	{
		
		if(num[i]>maximo)
		{
			maximo=num[i];
			cont1=1;
		}
		else
			{
			if(num[i]==maximo)
			{
				cont1=cont1+1;
			}
		}
		if(num[i]<minimo)
		{
			minimo=num[i];
			cont2=1;
		}
		else
		{
			if(num[i]==minimo)
			{
				cont2=cont2+1;
			}
		}
		
	
	}
	printf("El valor minimo es: %d y el numero de ocurrencias es %d veces.\n", minimo, cont2);
	printf("El valor maximo es: %d y el numero de ocurrencias es: %d veces.\n", maximo, cont1);
 }

int main()
{
	int num[10];
	int maximo=0, minimo=0,i,j=1;
	
	for (i = 0; i < 10; i++) 
	{
		printf("Ingrese número %d (enteros):\n",j);
		scanf("%d", &num[i]);
		j++;
	}
	maximo=num[0];
	minimo=num[0];
	Comparacion_Mostrar(num, i, maximo,minimo);
	
	return 0;
}

