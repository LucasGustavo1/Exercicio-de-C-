Questão 1 
#include <stdio.h>

int main()
{
    int vet[10];
    int i;
    int maiorn, menorn = 0;
    
    printf("Insira os vetores: \n");
    for (i = 0; i <=9; i++){
        printf("%dº: ", i);
        scanf("%d", &vet[i]);
        
    }
    
    maiorn = vet[0];
    menorn = vet[0];
    
    for (i = 1; i <=9; i++){
        
        if(vet[i] > maiorn ){
            maiorn = vet[i];
        }
        
        if (vet[i] < menorn){
            menorn = vet[i];
        }
    }
    
    printf("-------------------------------------------");
    printf("\n\nMaior valor do vetor: %d\n\n", maiorn);
    printf("Menor valor do vetor: %d\n\n", menorn);

    return 0;
}

