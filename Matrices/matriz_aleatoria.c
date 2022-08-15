/* Hacer una matriz preguntando al usuario el numero de filas y columnas, llenar con numeros aleatorios,
 * copiar el contenido a otra matriz y por ultimo mostrarla en pantalla. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int filas,columnas;

	printf("Ingrese el numero de filas: ");
	scanf("%d",&filas);

	printf("Ingrese el numero de columnas: ");
	scanf("%d",&columnas);

	int matriz[filas][columnas]; //Definiendo la matriz
	
	srand(time(NULL));

	//Llenando la matriz con numeros aleatorios.
	for(int i=0;i<filas;i++){
		for(int j=0; j<columnas;j++){
			int numero_random = 0 +rand() % (100 + 1 - 0); //Generando un numero aleatorio [0,100]
			matriz[i][j] = numero_random;
		}
	}
	
	//Copiando la matriz a otra.
	int matriz_copy[filas][columnas];
	for(int i=0;i<filas;i++){
		if(i != 0){
			printf("\n\n");
		}
		else{
			printf("\n");
		}
		for(int j=0;j<columnas;j++){
			matriz_copy[i][j] = matriz[i][j];
			//Mostrando la matriz en pantalla.
			printf("  %d  ",matriz_copy[i][j]);
		}
	}

}
