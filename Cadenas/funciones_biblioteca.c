#include <stdio.h>
#include <string.h>


int main(){
    char name[50] = "Jesus Manuel";
    char name_copy[50] = {0};
    char a[20] = " Hola, buenas tardes";
    
    strcpy(name_copy,name); //Asigna los caracteres que contiene el segundo al primero
    printf("Copia de nombre: %s",name_copy);

    strcat(name,a); //Agrega los caracteres de la segunda al final de la primera;
    printf("\n\nConcatenando cadenas: %s",name);

    printf("\nLongitud: %ld",strlen(name)); //Retorna la longitud de una cadena.

    printf("\n%d",strcmp(name,a)); 
}