/******************************************************************************

 Faça um Programa que leia 4 notas, mostre as notas e a média na tela

*******************************************************************************/
#include <stdio.h>

int main()
{
    float dogcoin[4] = {};
    float media;
    int cont;
    
    for (cont = 0; cont < 4; cont ++){
    printf("Digite uma nota: \n");
    scanf("%f", &dogcoin[cont]);
    }
    
    for (cont = 0; cont < 4; cont ++){
      media += dogcoin[cont];  
    }
    media = media/4;
    
    printf ("----------");
    printf ("\n   Notas:\n");
    printf ("----------\n" );
    
    for (cont = 0; cont < 4; cont ++){
        printf ( "%.2f\n", dogcoin[cont]);
    }
    
    printf( "\n Média: %.2f", media);
    
    
    
    
    return 0;
}

