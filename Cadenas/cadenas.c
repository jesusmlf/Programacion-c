#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "operaciones_cadenas.c"

int main(){
    char nombre[100] = "Jesus Manuel Lopez Fabian";
    char nombre_copy[100] = {0};
    char b[20] = "Hola";
    char vacia[20] = {0};

    //copiarCadena(nombre,nombre_copy);
    //printf("\nCadena copiada: %s",nombre_copy);
//
    //printf("\n\nLa longitud de la cadena es: %d caracteres",longitud(nombre_copy));
//
    //printf("\n%d",esVacia(b));
    //printf("\n%d",esVacia(vacia));
    //
//
    //concatenarCadena(nombre,b);
    //printf("%s",b);
    //printf("\n%s",nombre);

    //printf("%d",compararCadenas("Juan","Juan"));

    printf("%ld",cadenaToEntero("5234"));

    return 0;
}