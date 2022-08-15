#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *ObtenerSaludo(){
    char a[] = "Hola Mundo";
    int n = strlen(a);
    char *r = (char*) malloc(n+1);
    strcpy(r,a);
    return r;
}
int main(){
    printf("%s",ObtenerSaludo());
}