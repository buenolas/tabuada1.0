#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int tabuada = 0;
    do{
    printf("==========TABUADA==========\n\n");
    
    printf("Digite a tabuada que voce deseja:\n>>> ");
    scanf("%i", &tabuada);

    if( tabuada != -1){
    
    for( int x = 1; x <= 10; ++x){
        printf("%i x %i = %i\n\n", x, tabuada, x * tabuada);
    }
    system("pause");
    system("cls");
    }
    else{
        printf("Obrigado por utilizar nossa tabuada!\n\n");
        system("pause");
        system("cls");
    }
    
    }while( tabuada != -1);

    
    return 0;
}