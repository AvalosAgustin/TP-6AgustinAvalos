#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cambio_A_mayuscula_primera_letra (char*palabra)
{
	int dif='a'-'A';
	if (palabra[0]>='a' && palabra[0]<='z')
	{
		palabra[0]=palabra[0]-dif;
	}
	
}
int main() 
{
	int i,d,nota;
	float acu=0,acu1=0;	
	char palabra[20];

	for(i=1; i<=3;i++)
	{
		acu=0;
		printf("Ingresar el Apellido del alumno%d\n",i);
		scanf("%s",palabra);
		
		
			cambio_A_mayuscula_primera_letra (palabra);
		
		
		printf("El Apellido del alumno ingresado es: %s\n",palabra);
		for (d=1;d<=5;d++)
		{
			printf("Ingresar la nota de la materia %d\n",d);
			scanf("%d",&nota);
			acu=(acu+nota);
		}
		acu1=(acu1+acu);
		printf("El promedio del alumno %d es %f\n" ,i,acu/5);
		
		
	}
	
	printf("El promedio de el curso es:%f\n",acu1/3);
	system("pause");
	
	return 0;
}
