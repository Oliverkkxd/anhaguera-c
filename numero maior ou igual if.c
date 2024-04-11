#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite um numero:\n");
    scanf("%i", &n1);
    printf("Digite outro numero:\n");
    scanf("%i", &n2);
    
if(n1 > n2){
printf("o maior numero é:%i", n1);
}


else if(n2 > n1){
printf("o maior numero é:%i", n2);
}

else printf("sao iguais");




}

