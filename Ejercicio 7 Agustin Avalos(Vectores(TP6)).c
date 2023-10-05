#include <stdlib.h>
#include <stdio.h>

int Tiempo_medio(int*tiempo, int i, int j) 
{
	int acu=0;
	for(i=0;i<j;i++)
	{
		acu=acu+tiempo[i];
	}
	return acu;
}
int Primer_puesto(int*tiempo,int a, int i, int j) 
{
	
	for(i=0;i<j;i++)
	{
		
		if(a>tiempo[i])
		{
			a=tiempo[i];
		}
	}
	return a;
}


int Ultimo_Puesto(int*tiempo,int b, int i, int j) 
{
	for(i=0;i<j;i++)
	{
		
		if(b<tiempo[i])
		{
			b=tiempo[i];
		}
		
	}
	return b;
}


int main(int argc, char *argv[]) 
{
	float TiempoMedio=0;
	int tiempo[10];
	int e[10];
	int a=0,b=0,i,f=0,j=1,corredorPrimerPuesto=0,corredorSegundoPuesto=0,corredorUltimoPuesto=0;
	int TiempoPr=0,TiempoUl=0,tiem;
	for(i=0;i<10;i++)
	{
		printf("Ingrese los segundos del corredor %d\n",j);
		scanf("%d",&tiem);
		
		if(tiem<0 || tiem==0)
		{
			while(tiem<0 || tiem==0)
			{
				printf("Ingrese de nuevo el tiempo del corredor %d (tienen que ser numeros positivos)\n",j);
				scanf("%d",&tiem);
			}
			tiempo[i]=tiem;
		}
		else
		{
			tiempo[i]=tiem;
		}
		
		e[i]=j;
		j++;
	}
	a=tiempo[1];
	b=tiempo[1];
	
	f=tiempo[1];
	
	TiempoPr=Primer_puesto(tiempo,a,i,j); 
	
	TiempoUl=Ultimo_Puesto(tiempo, b, i,j); 
	
	
	
	for(i=0;i<j;i++)
	{
		
		if(TiempoPr==tiempo[i])
		{
			TiempoPr=tiempo[i];
			corredorPrimerPuesto=e[i];
		}
		
		
		if(TiempoUl==tiempo[i])
		{
			TiempoUl=tiempo[i];
			corredorUltimoPuesto=e[i];
			
		}
	}
	for(i=0;i<j;i++)
	{
		if ( f>=tiempo[i] && f != TiempoPr && e[i] != corredorPrimerPuesto ) 
		{
			f = tiempo[i];
			
			corredorSegundoPuesto = e[i];
		}
	}
	
	
	
	
	printf("Primer puesto es del El corredor %d tiene un tiempo de %d\n",corredorPrimerPuesto,TiempoPr);
	printf("Segundo puesto es del El corredor %d tiene un tiempo de %d\n",corredorSegundoPuesto,f);
	printf("Ultimo puesto es del El corredor %d tiene un tiempo de %d\n",corredorUltimoPuesto,TiempoUl);
	
	TiempoMedio=Tiempo_medio(tiempo, i,j); 
	printf("El tiempo medio que se recorrio en la carrera es de: %f\n",TiempoMedio );
	
	
	return 0;
}

