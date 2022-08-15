/* Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas. Posteriormente mostrar la matriz en pantalla. */

#include <stdio.h>

int main(){
    int filas, columnas;
    
    printf("\nDigite el numero de filas que tendra la matriz: ");
    scanf("%d", &filas);
    printf("\nDigite el numero de columnas que tendra la matriz: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    
    //Almacenando los elementos de la matriz:
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("\nIngrese el valor [%i][%i]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }    

    //Imprimiendo la matriz: 
    for (int i=0;i<filas;i++){
        printf("\n\n");
        for(int j=0;j<columnas;j++){
            printf("%d ",matriz[i][j]);
        }
    }
    return 0;
}
