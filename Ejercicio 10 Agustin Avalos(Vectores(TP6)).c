#include <stdio.h>

void positivos(int*positivo, int cont1, int i, int j ) 
{
	int a=0;
	for(i=0;i<cont1-1;i++)
	{
		for (j = 0; j <cont1-1-i ; j++) 
		{             
			if (positivo[j] < positivo[j+1 ]) {
				
				
				a= positivo[j];
				
				
				positivo[j] = positivo[j+1];
				
				
				positivo[j+1] = a;
			}
			
		}
		
	}
}

void negativos(int*negativo, int cont2,int i,int j) 
{
	int a=0;
	for(i=0;i<cont2-1;i++)
	{
		for (j = 0; j <cont2-1-i ; j++) 
		{             
			if (negativo[j] < negativo[j+1 ]) {
				
				
				a= negativo[j];
				
				
				negativo[j] = negativo[j+1];
				
				
				negativo[j+1] = a;
			}
			
		}
		
	}
}

int main() 
{
	int positivo[8];
	int negativo[8];
	int num[8];
	int i=0,j=0,k,cont1=0,cont2=0,p=0,n=0;
	for(i=0;i<8;i++)
	{
		
		printf("Ingrese un numero\n");
		scanf("%d",&num[i]);
		do 
		{
			if (num[i] == 0) 
			{
				printf("El número ingresado es 0 \n");
				printf("Ingrese otro número distinto de 0\n");
				scanf("%d",&num[i]);
			}
		} while (num[i]== 0);
		
	}
	
	
	
	
	for(i=0;i<8;i++)
	{
		if(num[i]>0)
		{
			
			positivo[cont1]=num[i];
			cont1=cont1+1;
			p=1;
		}
		else
		{
		 if(num[i]<0 )
			{
			 negativo[cont2]=num[i];
				cont2=cont2+1;
				n=1;
			}
		 
		}
	
	}

	if(p==1)
	{
		if(n==0)
		{
			printf("\nNumeros Positivo ingresados\n");
			for(i=0;i<8;i++)
			{
				if(num[i]>0)
				{
					
					printf("%d\n",num[i]);
					
				}
				
			}
			positivos(positivo, cont1, i, j ); 
			printf("\nNo se ingreso ningun numero negativo\n\n");
			printf("\nLos numeros positivos son:\n");
			for(k=0;k<cont1;k++)
			{
				
				printf(" %d ",positivo[k]);
				
			}
			printf(" : Y se ordenaron de manera decrecientes\n");
		}
		else
		{
			printf("\nNumeros Positivo ingresados\n");
			for(i=0;i<8;i++)
			{
				if(num[i]>0)
				{
					
					printf("%d\n",num[i]);
					
				}
				
			}
			positivos(positivo, cont1, i, j ); 
			printf("\nLos numeros positivos son:\n");
			for(k=0;k<cont1;k++)
			{
				
				printf(" %d ",positivo[k]);
				
			}
			printf(" : Y se ordenaron de manera decrecientes\n");
		}
		
	}
	
	if(n==1)
	{
		if(p==0)
		{
			printf("\nNumeros negativos Ingresados\n");
			for(i=0;i<8;i++)
			{
				if(num[i]<0)
				{
					printf("%d\n",num[i]);
				}
			}
			negativos(negativo,cont2,i,j);
			printf("\nNo se ingreso ningun numero positivo\n\n");
			printf("\nLos numeros negativos son:\n"); 
			
			for(k=0;k<cont2;k++)
			{
				
				
				printf(" %d ",negativo[k]); 
				
				
				
			}
			printf(" : Y se ordenaron de manera crecientes\n");
		}
		else
		{
			printf("\nNumeros negativos Ingresados\n");
			for(i=0;i<8;i++)
			{
				if(num[i]<0)
				{
					printf("%d\n",num[i]);
				}
			}
			negativos(negativo,cont2,i,j);
			
			printf("\nLos numeros negativos son:\n"); 
			
			for(k=0;k<cont2;k++)
			{
				
				
				printf(" %d ",negativo[k]); 
				
				
				
			}
			printf(" : Y se ordenaron de manera crecientes\n");
		}
		
	 
	}
	
	return 0;
}

