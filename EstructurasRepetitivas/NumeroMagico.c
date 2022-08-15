/* Realice un programa que solicite al usuario que piense un numero entero entre el 1 y el 100.
 * El programa debe general un numero aleatorio en ese mismo rango, e indicarle al usuario si el numero
 * que digito es meno o mayor al numero aleatorio, así hasta que lo adivine. Y por ultimo mostrarle el numerto de
 * intentos que le llevo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numero_aleatorio,numero_usuario, intentos=0;

	srand(time(NULL)); /*Esto cambia el valor si ejecutamos el programa en distinto instante de tiempo.*/
	
	
	numero_aleatorio = 0 + rand() % (100 + 1 - 0); //aleatorio = Limite_inferior + rand() % (Limite_superior + 1 - Limite_inferior)
	
	do{
		intentos += 1;
		printf("\n\nIngrese un numero entero comprendido entre 1 y 100: ");
		scanf("%d",&numero_usuario);

		if (numero_usuario > numero_aleatorio){
			printf("Intenta de nuevo con un numero menor");
		}
		else if (numero_usuario < numero_aleatorio){
			printf("Intenta de nuevo con un numero mayor");
		}
		else{
			printf("\nNumero de intentos: %d",intentos);
		}
	} while (numero_aleatorio != numero_usuario);
}