/* Hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego copiar todo su contenido hacia otra matriz */

#include<stdio.h>

int main(){
    int filas = 2, columnas = 2;

    int matriz[2][2] = { {1,2} , {3,4} };
    int matriz_copy[filas][columnas];

    for (int i=0; i<filas;i++){
        if(i != 0){ 
            printf("\n");
        }
        for (int j=0; j<columnas;j++){

            matriz_copy[i][j] = matriz[i][j];

            printf("%d",matriz_copy[i][j]);
        }
    }
    return 0;
}