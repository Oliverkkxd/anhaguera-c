/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int valor1, valor2;
    char carac;
    
    printf("Escolha o seu operador matemático +, -, *, /:  \n");
    scanf("%c", &carac);
  
    printf("Digite o primeiro valor:\n");
    scanf("%i", &valor1);
    
    printf("Digite o segundo valor:\n");
    scanf("%i", &valor2);
    
    switch(carac)
    {
    case '+':
     printf("resultado: %d",(valor1 + valor2));
      break;
  
    case '-':
     printf("resultado: %d",(valor1 - valor2));
      break;
    
    case '*':
     printf("resultado: %d",(valor1 * valor2));
      break;
    
    case '/':
     printf("resultado: %d",(valor1 / valor2));
      break;
        
    default:
     printf("Algo deu errado, tente novamente!");
      break;
        
    }
    
    return 0;
}

