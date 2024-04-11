#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite um numero:");
    scanf("%i", &n1);
    printf("Digite outro numero:");
    scanf("%i", &n2);
    
if(n1 > n2){
printf("o maior numero é:%i", n1);
}


else if(n2 > n1){
printf("o maior numero é:%i", n2);
}

else printf("sao iguais");




}

