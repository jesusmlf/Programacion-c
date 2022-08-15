/* Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores en
un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo 
vector. Muestre el contenido del nuevo vector en la salida estandar */

#include <stdio.h>

int main(){
    char vector1[] = {'a','b','c','d','e'};
    char vector2[] = {'f','g','h','i','j'};

    int len_vector1 = sizeof(vector1) / sizeof(vector1[0]);
    int len_vector2 = sizeof(vector2) / sizeof(vector2[0]);
    int len_newVector = len_vector1 + len_vector2;

    char newVector[len_newVector];

    for (int i=0;i<len_newVector;i++){
        if(i<len_vector1){
            newVector[i] = vector1[i];
        }
        else{
            newVector[i] = vector2[i-len_vector2];
        }

        printf("%c ",newVector[i]);
    }
    return 0;
}