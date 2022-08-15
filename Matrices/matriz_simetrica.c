/* Desarrollar un programa que determine si una matriz es simetrica o no.
 Una matriz es simetrica */
 
#include <stdio.h>
#include <stdbool.h>

int main(){
    int filas, columnas;
    bool band = true;

    printf("Ingrese el numero de filas: ");
    scanf("%d",&filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d",&columnas);

    if (filas != columnas){
        printf("La matriz no es simetrica");
        return 0;
    }
    int matriz[filas][columnas],matriz_T[filas][columnas]; //Definiendo la matriz

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            matriz_T[j][i] = matriz[i][j];
        }
    }
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
        if(matriz_T[i][j] == matriz[i][j]){
            continue;
            band = true;
        }
        else{
            band = false;
            break;
        }
        }
    }
    if(band == true){
        printf("La matriz es simetrica");
    }
    else {
        printf("La matriz no es simetrica");
    }

}