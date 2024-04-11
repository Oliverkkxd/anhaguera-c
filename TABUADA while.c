#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero;
    int valor_valido = false;
    
while(valor_valido == false){
        
    printf("Digite um numero de 1 a 10:");
    scanf("%i", &numero);
    
    if (numero >= 1 && numero <= 10){
        
            int contador = 1;
            while (contador <= 10){
                printf("%i X %i = %i \n", numero, contador, numero * contador);
                contador++;
            }

            valor_valido = true;
    }   
        else {
     printf("Numero invalido\n\n");
        
        }
    }
}   

