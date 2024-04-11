#include <stdio.h>

int main()
{
    int numero;
    printf("Escreva um número inteiro e positivo:");
    scanf("%i", &numero);
    
    if( numero % 2 == 0){
        printf("Esse número é par.\n");
    }
    else{
        printf("Esse número é impar.\n");
    }
    

    return 0;
}


