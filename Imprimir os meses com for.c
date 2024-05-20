#include <stdio.h>
int main()
{
    printf("Exercício While - Imprimir os meses \n\n");
    
    int variavel_de_controle = 0;
    
    for (variavel_de_controle = 0; variavel_de_controle <= 12; variavel_de_controle++)  {
        
        switch(variavel_de_controle){
            case 1:
                printf("%i - Janeiro \n", variavel_de_controle);
                break;
            case 2:
                printf("%i - Fevereiro \n", variavel_de_controle);
                break;
            case 3:
                printf("%i - Março \n", variavel_de_controle);
                break;
            case 4:
                printf("%i - Abril \n", variavel_de_controle);
                break;
            case 5:
                printf("%i - Maio \n", variavel_de_controle);
                break;
            case 6:
                printf("%i - Junho \n", variavel_de_controle);
                break;
            case 7:
                printf("%i - Julho \n", variavel_de_controle);
                break;
            case 8:
                printf("%i - Agosto \n", variavel_de_controle);
                break;
            case 9:
                printf("%i - Setembro \n", variavel_de_controle);
                break;
            case 10:
                printf("%i - Outubro \n", variavel_de_controle);
                break;
            case 11:
                printf("%i - Novembro \n", variavel_de_controle);
                break;
            case 12:
                printf("%i - Dezembro \n", variavel_de_controle);
                break;
        } 
                
        
    }
}
