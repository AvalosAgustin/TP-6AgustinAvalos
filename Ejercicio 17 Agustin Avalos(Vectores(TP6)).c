#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void verificacion_Edad( int anio, int mes, int dia) 
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

int edad_persona1(int anio1 )
{
	int e=0;
	e=2023-anio1;
	return e;
	
}

int edad_persona2(int anio2 )
{
	int e=0;
	e=2023-anio2;
	return e;
	
}
int edad_persona3(int anio3 )
{
	int e=0;
	e=2023-anio3;
	return e;
	
}
int main() 
{
	int edad[3];
	char n1[35];
	char n2[35];
	char n3[35];
	int i,j=0,k,mes,dia,anio;
	int decision,E;
	int dia1,dia2,dia3,mes1,mes2,mes3,anio1,anio2,anio3;
	
	int a=0,b=0,f=0;
	char nombre[35];
	
	for(i=1;i<=3;i++)
	{
		printf("Ingrese el nombre de la persona%d\n",i);
		scanf("%s",nombre);
		printf("Ingrese el año de nacimiento\n");
		scanf("%d",&anio);
		printf("Ingresar el mes de nacimiento\n");
		scanf("%d",&mes);
		printf("Ingresar el dia de nacimiento\n");
		scanf("%d",&dia);
		
		verificacion_Edad(anio,mes,dia);
		
		if(i==1)
		{
			strcpy(n1,nombre);
			dia1=dia;
			mes1=mes;
			anio1=anio;
			E=edad_persona1(anio1);
			edad[j]=E;
		}
		else
		{
			if(i==2){
				strcpy(n2,nombre);
				dia2=dia;
				mes2=mes;
				anio2=anio;	
				E=edad_persona2(anio2);
				edad[j]=E;
			}
			else
			{
				if(i==3){
					strcpy(n3,nombre);
					dia3=dia;
					mes3=mes;
					anio3=anio;
					E=edad_persona3(anio3);
					edad[j]=E;
				}
			}
		}
		j++;
	}
	
	printf("Desea modificar alguna fecha\n");
	printf("1=si\n");
	printf("2=no\n");
	scanf("%d",&decision);
	
	if(decision==1)
	{
		
		while(decision==1)
		{
			strcpy(nombre," ");
			printf("Ingrese el nombre de la persona que desea cambiar su fecha: \n");
			scanf("%s",nombre);
			
			if(!(strcmp(nombre,n1)==0 || strcmp(nombre,n2)==0 || strcmp(nombre,n3)==0))
			{
				while(!(strcmp(nombre,n1)==0 || strcmp(nombre,n2)==0 || strcmp(nombre,n3)==0))
				{
					printf("El nombre de la persona no esta registrado para modificar su fecha\n");
					printf("Ingrese algunas de las personas que ya halla ingresado antes para poder modificar su fecha\n");
					scanf("%s",nombre);
				}
			}
			if((strcmp(nombre,n1)==0))
			{
				edad[0]=0;
				printf("Ingrese el año de nacimiento\n");
				scanf("%d",&anio);
				printf("Ingresar el mes de nacimiento\n");
				scanf("%d",&mes);
				printf("Ingresar el dia de nacimiento\n");
				scanf("%d",&dia);
				
				verificacion_Edad(anio,mes,dia);
				
				dia1=dia;
				mes1=mes;
				anio1=anio;
				E=edad_persona1(anio1);
				edad[0]=E;
			}
			else
			{
				if((strcmp(nombre,n2)==0))
				{
					edad[1]=0;
					printf("Ingrese el año de nacimiento\n");
					scanf("%d",&anio);
					printf("Ingresar el mes de nacimiento\n");
					scanf("%d",&mes);
					printf("Ingresar el dia de nacimiento\n");
					scanf("%d",&dia);
					verificacion_Edad(anio,mes,dia);
					dia2=dia;
					mes2=mes;
					anio2=anio;
					E=edad_persona2(anio2);
					edad[1]=E;
				}
				else
				{
					if((strcmp(nombre,n3)==0))
					{
						edad[2]=0;
						printf("Ingrese el año de nacimiento\n");
						scanf("%d",&anio);
						printf("Ingresar el mes de nacimiento\n");
						scanf("%d",&mes);
						printf("Ingresar el dia de nacimiento\n");
						scanf("%d",&dia);
						verificacion_Edad(anio,mes,dia);
						
						dia3=dia;
						mes3=mes;
						anio3=anio;
						E=edad_persona3(anio3);
						
						edad[2]=E;
					}
				}
			}
			printf("¿Desea modificar alguna fecha de alguna otra persona?\n");
			printf("1=si\n");
			printf("2=no\n");
			scanf("%d",&decision);
		}
	}
	printf("ssssssssssssssssssssssssss%d",edad[2]);
	a=edad[1];
	b=edad[1];
	f=edad[1];
	for(k=0;k<j;k++)
	{
		if(a>edad[k])
		{
			a=edad[k];
			
		}
		
		
		if(b<edad[k])
		{
			b=edad[k];
			
		}
	}
	for(k=0;k<j;k++)
	{
		if ( b<f ) 
		{
			f =edad[k];
			
		}
	}
	
	if(b==edad[0])
	{
		
		printf("La persona %s su edad es mayor y es:%d\n",n1,b);
		
	}
	else
	{
		if(b==edad[1])
		{
			printf("La persona %s su edad es mayor y es:%d\n",n2,b);
			
		}
		else
		{
			printf("La persona %s su edad es mayor y es:%d\n",n3,b);
		}
	}
	
	
	
	if(f==edad[0])
	{
		
		printf("La persona %s su edad es la segunda mayor y es:%d\n",n1,f);
		
	}
	else
	{
		if(f==edad[1])
		{
			printf("La persona %s su edad es la segunda mayor y es:%d\n",n2,f);
			
		}
		else
		{
			printf("La persona %s su edad es la segunda mayor y es:%d\n",n3,f);
		}
	}
	
	if(a==edad[0])
	{
		
		printf("La persona %s su edad es menor a las otras edades y es:%d\n",n1,a);
		
	}
	else
	{
		if(a==edad[1])
		{
			printf("La persona %s su edad es menor a las otras edades y es:%d\n",n2,a);
		}
		else
		{
			printf("La persona %s su edad es menor a las otras edades y es:%d\n",n3,a);
		}
	}
	
	
	system("pause");
	return 0;
}
