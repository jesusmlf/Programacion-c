# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int PedirCantidadArticulos(){
    int n = 0;
    printf("Digite la cantidad de articulos que desea comprar: ");
    scanf("%d",&n);
    return n;
}

char **PedirNombreArticulos(int cantidadArticulos){
    char aux[20];
    char **nombres = malloc(strlen(aux) + 1);
    for(int i = 0; i<cantidadArticulos; i++){
        printf("Ingrese el nombre del articulo numero %d: ",i+1);
        scanf("%s",aux);
        
        nombres[i] = (char *) malloc(strlen(aux) + 1);

        strcpy(nombres[i], aux);
    }
    return nombres;
}

float *PedirPrecioArticulo(int CantidadArticulos, char **NombresArticulos){

    float *PrecioProductos = (float *) malloc(CantidadArticulos*sizeof(float));

    float aux = 0;
    for(int i = 0 ; i<CantidadArticulos ; i++){
        printf("Ingrese el precio de '%s': ",NombresArticulos[i]);
        
        scanf("%f",&aux);
        PrecioProductos[i] = aux;
    }
    return PrecioProductos;
}

float CostoTotalProductos(int CantidadArticulos, float *PrecioDeCadaArticulo){
    float suma = 0;
    for(int i = 0; i<CantidadArticulos ; i++){
        suma = PrecioDeCadaArticulo[i] + suma;
    }
    return suma;
}
int main(){
    int CantidadArticulos = PedirCantidadArticulos();
    char **NombresArticulos = PedirNombreArticulos(CantidadArticulos);
    float *PrecioProductos = PedirPrecioArticulo(CantidadArticulos, NombresArticulos);
    float PrecioTotal = CostoTotalProductos(CantidadArticulos,PrecioProductos);
    printf("%f",PrecioTotal);

    return 0;
}
