/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int cod, quant;
   float total;
   
    printf("digite o código do seu produto:\n");
    scanf("%i", &cod);
    
    printf("digite a quantidade desejada:\n");
    scanf("%i", &quant);
    
    switch(cod)
    {
    case 100:
    case 103:
     total = quant* 1.20;
      printf("O total a ser pago é: %.2f", total);
       break;
    case 101:
      total = quant* 1.30;
       printf("O total a ser pago é: %.2f", total);
        break;
    case 102:
      total = quant* 1.50;
       printf("O total a ser pago é: %.2f", total);
        break;
    case 104:
      total = quant* 1.70;
       printf("O total a ser pago é: %.2f", total);
        break;
    case 105:
      total = quant* 2.20;
       printf("O total a ser pago é: %.2f", total);
        break;
    case 106:
      total = quant* 1.00;
       printf("O total a ser pago é: %.2f", total);
        break;

    default:
     printf("Produto nao disponível/Nao encontrado");
      break;
    
    
    }
    return 0;
}

