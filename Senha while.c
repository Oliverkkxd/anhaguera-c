#include <stdio.h>
#include <stdbool.h>


int main()
{
    bool Csenha = false;
    int Dsenha, Senha;
    
    while( Csenha == false)
    {
        
    printf("Digite uma nova senha:\n");
    scanf("%i", &Dsenha);
    printf("Digite sua senha:\n");
    scanf("%i", &Senha);
    
    
     if( Dsenha == Senha)
     {
        
        printf(" acesso permitido\n");
        Csenha  == true;
        return 0;
     }
      else
      {
        printf("acesso negado\n ");
       }
    
    }
   
}

