#include <stdio.h>

void secuencia(int cont1, int cont2, int numero2, int numero3) 
{
	if(cont1>0)
	{
		
		printf("El numero %d se encuentra dentro de la secuencia\n",numero2);
		printf("La cantidad de veces que se repite el numero %d son:%d\n",numero2,cont1);
		
		
		if(cont2>0)
		{
			printf("\n\nEl numero %d se encuentra dentro de la secuencia\n",numero3);
			printf("La cantidad de veces que se repite el numero %d son:%d\n",numero3,cont2);
			
		}
	}
	else
	{
		printf("Ninguno de los numeros ingresados esta dentro de la secuencia\n");
		
	}
}

int main(int argc, char *argv[]) 
{
	
	int numero1[8];
	int numero2,numero3,i,j=1,cont1=0,cont2=0,k=0,posicion=0,posicion2=0;
	for(i=0;i<8;i++)
	{
	 printf("Ingresar el numero %d (posicion %d)\n",j,i);
	 scanf("%d",&numero1[i]);
	 j++;
	}
	printf("---------------------------------------\n");
	printf("Ingrese otro numero\n");
	scanf("%d",&numero2);
	printf("Ingrese un tercer numero\n");
	scanf("%d",&numero3);
	for(k=0;k<i;k++)
	{
		if(numero2==numero1[k])
		{
			cont1=cont1+1;
			posicion=k;
			printf("El numero %d Se ubica en la posicion %d\n",numero2,posicion);
			
		}
		if(numero3==numero1[k])
		{
			cont2=cont2+1;
			posicion2=k;
			printf("El numero %d Se ubica en la posicion %d\n",numero3,posicion2);
		}
	}
	printf("---------------------------------------\n");
	secuencia( cont1, cont2, numero2, numero3); 
	
	return 0;
}

