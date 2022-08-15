/* Hacer un programa que lea 5 numeros en un arreglo, los copia a otro arreglo multiplicados por 2 
 y muestre el segundo arreglo. */

 #include <stdio.h>

 int main(){
    int vector1[] = {1,2,3,4,5};

    int len_vector1 = sizeof(vector1) / sizeof(vector1[0]);
    int new_vector[len_vector1];

    for(int i=0;i<len_vector1;i++){
        new_vector[i] = vector1[i] * 2;

        printf("%d ",new_vector[i]);
    }
    return 0;
 }