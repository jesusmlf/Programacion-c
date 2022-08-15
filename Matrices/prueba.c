#include <stdio.h>

int main(){
    int numero; //sizeof(numero) -> 4

    printf("Tamaño numero : %ld",sizeof(numero));
    do{
        printf("Ingrese un numero entero: ");
        scanf("%d",&numero);

        if (sizeof(numero) != 4){
            printf("Te pedi un entero, sonso.\n");
            }

    }while(sizeof(numero) != 4);

}
