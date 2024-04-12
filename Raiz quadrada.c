#include <stdio.h>
#include <math.h>
int main()
{
    float valor1, raiz;
    
    printf("digite um numero:\n");
    scanf("%f", &valor1 );
    raiz = sqrt(valor1);
    
    if( valor1 >=1 )
    {
     printf("A raiz quadrada do numero %.2f, é   %.2f", valor1, raiz);
    }
    else{
        printf("Numero  Invalido");
    }

    }




