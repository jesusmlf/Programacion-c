/*Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en
 * orden inverso. */

#include <stdio.h>

int main(){
    int numeros[] = {1,2,3,4,5};
    
    int len = sizeof(numeros) / sizeof(numeros[0]);
    int numeros_inverso[len];
    
    for(int i = len;i>0;i--){
        numeros_inverso[len-i] = i;
        printf("%d ",numeros_inverso[len-i]);
    }
    int len_inv = sizeof(numeros_inverso) / sizeof(numeros_inverso[0]);
    printf("Tamaño: %d ",len_inv);
}