/******************************************************************************

Exercício 9 - Escreva um programa que simule um caixa eletrônico.
O programa deve apresentar um menu da seguinte forma:
Menu de opções
1- Consulta
2- Saque
3- Depósito
4- Sair
Observações
- O valor inicial do saldo é zero.
- Quando o usuário digitar a opção 1, devemos imprimir o valor do saldo
- Quando o usuário digitar a opção 2, devemos permitir que o usuário digite o valor
de saque.
- Quando o usuário digitar a opção 3, devemos permitir que o usuário digite o valor
de depósito.
- A cada operação de saque devemos subtrair o valor digitado pelo usuário do valor
do saldo.
- A cada operação de depósito devemos somar o valor digitado pelo usuário do valor
do saldo.
- O programa encerra quando o usuário digitar a opção 4 (Sair
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ftr = true;
    int op;
    float vs, vd;
    float sc = 0.0;
    
    while (ftr == true ){
    printf("   MENU\n");
    printf("1- Consulta\n");
    printf("2- Saque\n");
    printf("3- Depósito\n");
    printf("4- Sair\n");
    printf("----------------\n");
    scanf("%i", &op);
   
     
    switch(op) {
    case 1: 
      printf("\n Saldo na conta: %.2f \n \n",  sc);
      break;
    case 2:
        printf ( "\nDigite o valor do saque:\n" );
        scanf ( "%f", &vs );
        
        if (vs <= sc)    {
            sc = sc - vs; 
            printf ( "\nSaque feito com sucesso!\n" );
            printf ( "\n Saldo em conta é R$%.2f\n", sc );

        }
        else    {
            printf ( "\nQuantidade insuficiente para saque! \n" );
            printf ( "\nvocê possui R$%.2f na conta\n\n", sc );
           
        }
        break;    

    case 3:
       printf("\nDigite o valor do deposito:\n");
       scanf("%f", &vd);
       sc = sc + vd;
         printf ( "\nDepósito realizado com sucesso!\n" );
      break;
    case 4:
    printf("obrigado pela preferencia\n");
        ftr = false;
        break;
    
       default:  
         printf ( "Opção inválida");
    } 
    
    }
    return 0;
}

