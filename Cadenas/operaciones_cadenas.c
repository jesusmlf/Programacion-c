#include <stdio.h>
#include <math.h>

//Prototipo de funciones
void copiarCadena(char cadena[], char cadena_copy[]);
int longitud (char string[]);
int esVacia (char string[]);
void concatenarCadena(char string1[], char string2[]);
int compararCadenas(char a[],char b[]);
long cadenaToEntero(char a[]);

void copiarCadena(char cadena[], char cadena_copy[]){
    int i = 0;
    while(cadena[i] != '\0'){
        cadena_copy[i] = cadena[i];
        i++;
    }
    cadena_copy[i] = '\0'; 
    }
    //Agregamos el final de la cadena.
    //El caracter '\0' delimina el final de la cadena.
    //el fin de cadena tenemos que asignarlo manualmente una vez que hayamos salido del
    //ciclo de repeticiones.

int longitud(char string[]){
    int contador = 0;
    int i = 0; 
    while(string[i] != '\0'){
        contador += 1;
        i++;
    }
    return contador;
}

int esVacia(char string[]){
    //Esta funcion retorna true cuando la lista esta vacia
    if (string[0] == '\0'){
        return 1;
    }
    else{
        return 0;
    }
}

void concatenarCadena(char string1[], char string2[]){
    int j = longitud(string1);
    int i = 0; 

    while(string2[i] != '\0'){
        string1[j + i] = string2[i];
        i++;
    }
}

int compararCadenas(char a[],char b[]){
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i]==b[i])
    {
        i++;
    }
    if (a[i]-b[i] == 0){
        return 1;
    }
    else{
        return 0;
    }
}

long cadenaToEntero(char a[]){
    int i = 0,suma = 0;
    int len = longitud(a);
    while(a[i] != '\0'){
        suma += (a[i]-'0') * pow(10,len-1-i);
        i++;
    }

    return suma;
}