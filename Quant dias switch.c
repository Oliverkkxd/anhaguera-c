#include <stdio.h>

int main()
{
    int mes;
    
    printf("Digite o número de um mes:\n ");
    scanf("%i", &mes);
    
    switch(mes)
    {
    case 2:
    printf("28 Dias.");
    break;
    
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 dias.");
    break;
    
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
     printf("31 Dias.");
    break;
   
   
    default:
    printf("mes inválido!");
    break;
    }
    return 0;
}

