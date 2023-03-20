/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior 
e o menor elemento do vetor


Questão D */
#include <stdio.h>

int main()
{
    int vetor[10];
    int i;
    int maior, menor = 0;
    
    printf("Insira os vetores: \n");
    for (i = 0; i <=9; i++){
        printf("%dº: ", i);
        scanf("%d", &vetor[i]);
        
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for (i = 1; i <=9; i++){
        
        if(vetor[i] > maior ){
            maior = vetor[i];
        }
        
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("-------------------------------------------");
    printf("\n\nMaior valor do vetor: %d\n\n", maior);
    printf("Menor valor do vetor: %d\n\n", menor);

    return 0;
}

