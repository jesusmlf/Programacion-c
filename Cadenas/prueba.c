#include <stdio.h>

int main(){
    char a[] = "123";
    //printf("%d",a[0]-'0');
    int b = a[0]-'0'; //Convertir a entero.

    printf("%ld",sizeof(b));
    }