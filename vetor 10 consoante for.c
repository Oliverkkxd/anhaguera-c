/******************************************************************************

 Faça um Programa que leia um vetor de 10 caracteres, e informe quantas consoantes
foram lidas. Imprima as consoantes.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char lista[10] = {};
    char listcon[10] = {};
    int cont, posi = 0;
 
    for(cont=0; cont <= 9; cont++ ){
        printf("digite um caracter: \n ");
        scanf("%s", &lista[cont]);
    }
    for(cont=0; cont <= 9; cont++ ){
     if (lista[cont] == 'a'|| lista[cont] =='e'|| lista[cont] =='i'|| lista[cont] =='o'|| lista[cont] =='u' ){
     
     
        }
       
       else {
         listcon[posi] = lista[cont];
         posi++;
       } 
    }  
   printf("consoantes\n"); 
   for(cont=0; cont <= posi; cont++) {
       printf ("%c ", listcon[cont]);
   }
        
        
        
     
     
}
    
    

  


