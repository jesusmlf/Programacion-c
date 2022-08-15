# include <stdio.h>

int main(){
    int valor = 0;
    int hola[3];
    for (int i = 0; i<3 ; i++){
        scanf("%d",&valor);
        hola[i] = valor;
        printf("%d",hola[i]);
    }
}