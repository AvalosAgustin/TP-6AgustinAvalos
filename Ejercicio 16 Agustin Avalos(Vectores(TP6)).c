#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void verificacion_de_anio_mes_dia( int anio, int mes, int dia) 
{
	int a=0,m=0,d=0;
	if(anio<=0 || anio>2023)
	{
		
		while(anio<=0){
			
			printf("El año no es valido\n");	
			printf("Ingresar nuevamente el año\n");
			scanf("%d",&anio);
		}
		
		while(anio>2023){
			
			printf("El año no es valido(tiene que ser menor a 2023)\n");	
			printf("Ingresar nuevamente el año\n");
			scanf("%d",&anio);
		}
		a=1;
	}
	
	else
	{
		a=1;	
	}
	
	if(mes>12 || mes<=0)
	{   
		while(mes>12 || mes<=0){
			printf("\nEl mes no es valido\n");
			printf("Ingresar nuevamente el mes\n");
			scanf("%d",&mes);
			
		}
		
		printf("El mes es valido\n");
	}
	else
	{
		m=1;
	}
	if(mes==2)
	{
		if (anio%4==0) 
		{
			if (dia<=29) 
			{
				d=1;
			}
			else
			{
				if(dia>29)
				{
					while(dia>29 || dia<0)
					{
						printf("el dia no es valido\n");
						printf("Ingresar nuevamente el dia\n");
						scanf("%d",&dia);
						
					}
					
				}
				
				
			}
		}
		else 
		{
			if (dia<=28) 
			{
				d=1;
			}
			else
			{
				if(dia>28 ||dia<0)
				{
					
					while(dia>28 || dia<0)
					{
						printf("el dia no es valido\n");
						printf("Ingresar nuevamente el dia\n");
						scanf("%d",&dia);
						
					}
					d=1;
					m=1;
					printf("El dia es valido\n");
				}
			}
		}
	}
	else
	{
		if(mes==4 || mes==6 || mes==9 || mes==11)
		{
			if(dia>30 || dia<0)
			{
				while(dia>30 || dia<0)
				{
					printf("el dia no es valido\n");
					printf("Ingresar nuevamente el dia\n");
					scanf("%d",&dia);
					
				}
				
			}
			d=1;
			m=1;
		}
		else
		{
			if(dia<=31)
			{
				while(dia>31 || dia<0)
				{
					printf("el dia no es valido\n");
					printf("Ingresar nuevamente el dia\n");
					scanf("%d",&dia);
					
				}
				
				
			}
			d=1;
			m=1;
			
		}
	}
	
	if(a==1 && d==1 && m==1)
	{
		printf("Las fechas ingresadas son validas\n");
		
	}
}


int main() 
{
	
	int i=0,s,G,anio,mes,dia,r;
	char n[20];
	char l[20];
	r=2023;
	for(i=1;i<=3;i++)
	{
		printf("Ingrese su Nombre\n");
		scanf("%s",n);
		
		printf("Ingresar el anio\n");
		scanf("%d",&anio);
		
		printf("Ingresar el mes\n");
		scanf("%d",&mes);
		
		printf("ingresar el dia\n");
		scanf("%d",&dia);
		
	
		
		printf("Ingrese su Sueldo\n");
		scanf("%d",&s);
		
		
		
		if(r>anio)
		{
			r=anio;
			G=s;
			strcpy(l,n);		
		}
		verificacion_de_anio_mes_dia( anio, mes, dia);
		
	}
	printf("El empleado mas antiguo es:%s\n",l);
	
	printf("El sueldo del empleado mas antiguo es:%d\n",G);
	system("pause");
	return 0;
}
