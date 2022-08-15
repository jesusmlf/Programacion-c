/* Realizar un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la 
diagonal principal.*/

#include<stdio.h>

int main(){
    int matriz[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    //printf("%d ",matriz[0][0]);
    //printf("%d ",matriz[1][1]);  -> Diagonal princial.
    //printf("%d",matriz[2][2]);

    printf("Diagonal principal: ");
    for(int i=0; i<3 ; i++){
        printf("%d ",matriz[i][i]);   
    }
    return 0;
}