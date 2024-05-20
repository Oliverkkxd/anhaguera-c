/******************************************************************************

Faça um Programa que leia um vetor de 5 números e exiba na tela..

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[] = {0, 1, 2, 3, 4};
    int cont;
    
    for (cont = 0 ; cont< 5; cont++){
        printf("%i ", lista[cont]);
    }
    printf ( "\n\n");
    
    
    for (cont = 4; cont >= 0 ; cont--){
        printf("%i ", lista[cont]);
    }
  
}

