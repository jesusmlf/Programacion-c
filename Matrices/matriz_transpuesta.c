/* Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
 La matriz transpuesta  es aquella en la que la columna i era la fila i de la matriz original. */

#include <stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz_transpuesta[3][3];

    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            matriz_transpuesta[i][j] = matriz[j][i];

            printf("%d",matriz_transpuesta[i][j]);
        }
    }
}