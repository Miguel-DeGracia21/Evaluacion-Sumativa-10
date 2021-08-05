
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main ()
{
	//Bloque de variables	
	int num1, Miguel;
	//punteros
	int * numero1= &num1;
	int * deGracia= &Miguel;
	//Bloque de instrucciones
	
    printf("INSERTA UN NUMERO ENTERO: ");
    scanf("%d", &num1);
    	
    printf("%d", calculos (num1, Miguel) );
    
	return 0;
}



//Inicio de funcion 
int calculos (int numero1, int deGracia)
{
	
	deGracia= pow(numero1,3);
    if(numero1 !=15){
       printf("\n La potencia al cubo del numero %d es: %d  \n\n",numero1,deGracia);
	}
	else if(numero1==15){
		printf("\nQUINCE\n\n");
	}	
	system ("PAUSE");	

    return 0;
}
