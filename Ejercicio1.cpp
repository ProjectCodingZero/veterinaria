//Bibliotecas
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Universidad Tecnologica Nacional
Facultad Regional Tucuman
Ingenieria en Sistemas de Informacion

Algoritmos y Estructuras de Datos

Integrantes

44477563 - Marcos Rieznik

*/

main (){
	int num = 0, auxB = 0, auxC = 0, auxD = 0,i = 0;

	
	printf("Ingresar el numero de Fibonacci que quiere saber: \n\n");
    printf("===> ");
	scanf ("%d",&num);
    system("cls");

	if (num<0)  
        {
		    printf ("El numero no es valido");
	    }   
    else
        {
		
		do  
        {
			auxB=auxD+auxC;
			if (i==0)       
                {
				    auxC++;
			    }
			auxD=auxC;
			auxC=auxB;
			i++;
		}   
            while (i<=num);
    
		printf ("El numero convertido en Fibonacci es: %d",auxB);
	}
	
}