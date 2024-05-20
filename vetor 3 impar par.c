/******************************************************************************

 Faça um Programa que leia 5 números inteiros e armazene-os num vetor. Armazene
os números pares no vetor “par”e os números ímpares no vetor “ímpar”. Imprima os três
vetores.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int listapar[5] = {};
    int listaimpar[5] = {};
    int lista[5] = {};
    int cont, par = 0,impar = 0 ;
 
    for(cont=0; cont <= 4; cont++ ){
        printf("digite um numero inteiro: \n ");
        scanf("%i", &lista[cont]);
    }
    
    for(cont=0; cont <= 4; cont ++){
     if (lista[cont] % 2 == 0){
     listapar[par] = lista[cont];
     par++;
        }
       
       else {
         listaimpar[impar] = lista[cont];
         impar++;
       } 
    }  
printf("numeros\n"); 

   for(cont=0; cont <= 4; cont++) {
       printf ("%i \n", lista[cont]);
   }
   
   printf("numeros pares\n");
   
   for(cont=0; cont < par; cont++) {
       printf ("%i \n", listapar[cont]);}
       
       printf("numeros impares\n");
   
   for(cont=0; cont < impar; cont++) {
       printf ("%i\n ", listaimpar[cont]);}
   
   
        
        
        
     
     
}
    
    
