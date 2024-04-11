#include <stdio.h>

int main()
{
    int idade;
    int maior;
    int numerador = 1;
    
    while(numerador <= 5 ) {
    
    printf("digite sua idade:\n");
    scanf("%i", &idade );
    numerador++;
    
    if(idade >=18){
        maior++;
    }
    
   
    
    
    }
    printf("%d Sao maiores de idade", maior);




    return 0;
}

