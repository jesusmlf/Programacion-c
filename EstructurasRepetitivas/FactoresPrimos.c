/* Realice un programa que calcule la descomposición en factores
 * primos de un número entero.
 */
#include<stdio.h>

int main(){
    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero);

    for(int i=2;numero!=1;i++){
        //Hara el bucle for mientras numero sea diferente de 1.
        while(numero%i == 0){
            printf("%d ",i);
            numero /= i;
        }
    
    //for(int i=2; numero>1 ;i++){ // "i" inicia en 2, ya que es el primero numero primo,
    //    while(numero%i==0){
    //        //printf("%d ",i);
    //        numero /= i;
    //        printf("%d ",i);
    //    }
    //
    //}
    return 0;
}