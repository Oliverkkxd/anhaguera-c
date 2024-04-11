
#include <stdio.h>

int main()
{
    // variavel
    int idade, tempo;
    
printf("Digite sua idade:\n");
scanf("%i", &idade);

printf("Digite seu tempo de serviço:\n");
scanf("%i", &tempo);


if(idade >= 65 && tempo >= 30){
    printf("\n pode se aposentar");
} 
else if( (idade >= 60 && tempo >= 25)){
    printf("\n pode se aposentar");
    
}

else(printf("nao esta no tempo de se aposentar"));

}

