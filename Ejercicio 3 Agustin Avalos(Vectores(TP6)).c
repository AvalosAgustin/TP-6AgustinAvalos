#include <stdio.h>
#include <stdlib.h>
int monto(int i,int*num)
{
	int acu=0,k;
	for(k=0;k<i;k++)
	{
		acu=acu+num[k];
	}
	return acu;
}
int main() 
{
	int num[10];
	
	int i=0,j=1,mayor,compra,TotalPago=0;
	
	for(i=0;i<10;i++)
	{
		printf("Ingresar cuanto gasto en la compra %d \n",j);
		scanf("%d",&num[i]);
		
		if(mayor<num[i])
		{
			mayor=num[i];
			compra=j;
		}
		j++;
	}
	TotalPago=monto(i,num);
	
	printf("El monto total es de:%d\n",TotalPago);
	printf("La compra %d tiene el mayor gasto y es de:%d\n",compra,mayor);
	
	return 0;
}

