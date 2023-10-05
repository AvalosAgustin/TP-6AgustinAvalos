#include <stdio.h>

void ordenado_creciente(int*num, int i, int j) 
{
	int a=0;
	for (i = 0; i < 7-1; i++) 
	{
		for (j = 0; j <7-1-i ; j++) 
		{             
			if (num[j] > num[j+1]) {
				
				
				a= num[j];
				
				
				num[j] = num[j+1];
				
				
				num[j+1] = a;
			}
			else
			{
				a=num[j];
				
			}
		}
	}
	printf("Los numeros ordenados de menor a mayor son:\n");
	for(i=0;i<7;i++)
	{
		printf(" %d  ",num[i]);
	}
}

int main(int argc, char *argv[]) 
{
	int num[7];
	int i=0,j=0,n;
	for(i=0;i<7;i++){
		printf("Ingrese un numero\n");
		scanf("%d",&n);
		if(n<0)
		{
			while(n<0)
			{
				printf("El numero esta mal tiene que ser mayor a cero\n");
				scanf("%d",&n);
				
			}	
		}
		
		
		if(n>0)
		{
			num[i]=n;
		}
		
	}
	
	
	

	
	ordenado_creciente(num, i, j) ;
	
	
	
	
	
	
	return 0;
}


