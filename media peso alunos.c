/******************************************************************************

Exercício 8 -. Escreva um programa que pergunte ao usuário quantos alunos ele tem em sua
academia. Em seguida, através de um laço while, o usuário digita o peso de todos os alunos,
um por vez, e por fim, o programa deve mostrar a média de peso dos clientes.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quant_alun, soma;
    int laco = 1 ; 
    float peso_aluno, media_peso;
    
    printf("Quantos alunos tem na sua academia?\n");
    scanf("%i", &quant_alun);
   
    while(quant_alun >= laco ){
        printf("Digite o peso do aluno:\n");
        scanf("%f", &peso_aluno);
        
    soma += peso_aluno;
    laco++;
    }
    media_peso = soma / quant_alun;
    printf("\n\n  A média de peso dos alunos é de %.2f.", media_peso);
    return 0;
}

