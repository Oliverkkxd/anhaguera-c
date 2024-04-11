#include <stdio.h>

int main()
{
    char letra; 
    printf("digite uma letra:\n");
    scanf("%c", &letra);
    
    switch(letra){
        
        case 'a' :
        printf("é uma vogal");
        break;
        
        case 'e' :
        printf("é uma vogal");
        break;
        
        case 'i' :
        printf("é uma vogal");
        break;
        
        
        case 'o' :
        printf("é uma vogal");
        break;
        
        
        case 'u' :
        printf("é uma vogal");
        break;
        
        
        default:
        printf("CONSOANTE");
        break;
        
        
    }

    return 0;
}


