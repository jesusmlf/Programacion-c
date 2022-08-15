#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char nombre[50] = "Jesus Manuel Lopez Fabian";
    int edad = 20;
    float estatura = 1.68;

    char salida[200];
    char salida2[100];

    sprintf(salida,
            "Mi nombre es %s, tengo %d años y miedo %0.2f metros."
            ,nombre
            ,edad
            ,estatura);

    printf("\n%s",salida);

    sprintf(salida2,
            "Tengo %d años y mido %0.2f metros"
            ,edad
            ,estatura);
    printf("\n\n%s",salida2);
    //sprintf formatea la cadena y la asigna a salida. Luego, con printf mostramos su
    //contenido por consola.
    return 0;
}