/* Realizar un programa para rellenar una matriz cuadrada pidiendo al usuario el numero de filas y columnas.
   Si la matriz no es cuadrada pedir nuevamente el numero de filas y columnas. Posteriormente mostrar
   la diagonal principal de la matriz. */

#include <stdio.h>

    
int main(){
    int filas, columnas;

    do{ 
    printf("\n-- Ingrese una matriz cuadrada --");

        do{ 
            printf("\nIngrese el numero de filas: ");
            scanf("%i",&filas);
            if (sizeof(filas) != 4 ){
                printf("Intente de nuevo ingresando un entero");
            }
            else{
                break;
            }
        }while (sizeof(filas) != 4);

        do{
            printf("\nIngrese el numero de columnas: ");
            scanf("%i",&columnas);
            if (sizeof(columnas) != 4){
                printf("Intente de nuevo ingresando un entero");
            }
        }while (sizeof(columnas) != 4);

    if (filas != columnas){
        printf("\nEror: El numero de filas y columnas tiene que ser igual. \nIntente de nuevo.\n");
    }
    } while(filas != columnas);

    int matriz[filas][columnas];
    int diagonal[filas];

    //Almacenando los elementos en la matriz.
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            printf("Ingrese el valor [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            diagonal[i] = matriz[i][i];
        }
    }
    //Almacenando y mostrando la diagonal principal:
    printf("Diagonal principal: ");
    for(int i=0;i<filas; i++){
        printf("%d ",diagonal[i]);
    }
    return 0;
}