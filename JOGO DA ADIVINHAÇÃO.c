/******************************************************************************
Artur 


*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int segredo = rand()%30 + 1;
    int palpite = 0, tentativa =0;
    
    while  (palpite != segredo) {
    printf("\ntente adivinhar o numero:");
    scanf("%d" , &palpite);
    
    if (palpite > segredo) 
        printf("Digite um numero menor");
    
    if (palpite < segredo)
    printf("Digite um numero maior");
    
      tentativa +=1;  
    }

    
    if (palpite == segredo){
        printf("\n ACERTOU!");
    }
    else {
        printf("\n ERROU !");
    }
     
     printf("\nna tentativa %d ", tentativa);
    

    return 0;
}




