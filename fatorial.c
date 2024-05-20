/******************************************************************************

Exercício 7 - Calcular o fatorial de um número. O fatorial de um número é igual à
multiplicação desse número pelos seus antecessores maiores que zero.
Fatorial de 5: 5 * 4 * 3 * 2 * 1 = 120

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, resultado = 1 ;
    
    printf("Digite um numero:");
    scanf("%i", &num);
    
    while(num >= 1){
        resultado = resultado * num;
        printf("%i\n", resultado);
        num--;
        
    }
    printf("\n resultado = %i",resultado);
    
    

    return 0;
}


