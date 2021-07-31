//Bibliotecas
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "operaciones.h"
/*
Universidad Tecnologica Nacional
Facultad Regional Tucuman
Ingenieria en Sistemas de Informacion

Algoritmos y Estructuras de Datos

Integrantes

44477563 - Marcos Rieznik

*/


//Dentro de las llaves escribes el codigo. Atento al especificador de formato.
//Recordar poner & para las variables.
main()
{
    int numA, numB, sum, rest, multip;
	
	printf ("Ingrese el primer valor: ");
	scanf ("%d", &numA);
	printf ("Ingrese el segundo valor: ");
	scanf ("%d", &numB);
	
	printf ("El resultado de la suma es = %d\n",suma(numA,numB));
	printf ("El resultado de la resta es = %d\n",resta(numA,numB));
	printf ("El resultado de la multiplicacion es = %d\n",multiplicacion(numA,numB));
	
	if (numB!=0)
	{
		printf ("El resultado de la division es = %.2f\n",division(numA,numB));
	}
	else
	{
		printf ("La division no existe\n");
	}
	
	
}
