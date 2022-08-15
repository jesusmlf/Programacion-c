# include <stdio.h>
# include <string.h>
# include <stdlib.h>

char *PedirString(){
    char a[100]; 
    printf("Ingrese la palabra: ");
    scanf("%s",a);
    int n = strlen(a);
    char *b = (char *) malloc(n+1);
    strcpy(b,a);
    return b;
}

char *InvertirString(char *string){
    int n = strlen(string);
    char *new_string = (char*) malloc(n+1);

    for(int i=0;i<n;i++){
        new_string[i] = string[n-(i+1)];
    }
    return new_string;
}

int VerificarPalindromo(char *string_original, char *string_inverso){
    int n = strlen(string_original);
    int band = 0;
    for(int i=0;i<n;i++){
        if (string_original[i] == string_inverso[i]){
            band = 1;
            continue;
        }
        else{
            band = 0;
            break;
        }
    }
    return band;
}
int main(){
    char* string = PedirString();
    //printf("%s",string);
    char* inversa = InvertirString(string);
    
    printf("%d",VerificarPalindromo(string,inversa));
    return 0;
}