/*
Questão A 
Crie um programa que lê 10 valores inteiros, insere em um vetor e mostre na tela os valores lidos
*/

int main()
{
    int vetor[10];
    int i;
    
    printf("Digite os valores: ");
    for(i = 0; i <10; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0; i <10; i++){
        printf("%d : ", vetor[i]);
    }
    
    return 0;
}












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
        printf("%d: ", i);
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
    
    printf("\n\nMaior valor do vetor: %d\n", maior);
    printf("Menor valor do vetor: %d\n", menor);

    return 0;
}

/* Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior 
elemento e a posição que ele se encontra.

Questão E*/

#include <stdio.h>

int main()
{
    int valor, maior, ordem;
    int i;
    int vetor[10];
    
    printf("Digite os valores: \n");
    for (i = 0; i <= 9; i++){
        printf("%d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n\nValores do Vetor:\n");
    printf("--------------------------\n");
    for (i = 0; i <= 9; i++){
        printf("%d :", vetor[i]);
    }
    
    maior = vetor[0];
    ordem = 0;
    
    for (i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior= vetor[i];
            ordem = i;
        }
    }
    
    printf("Maior número: %d\n", maior);
    printf("Posicao : %d\n",ordem);
    
    return 0;
}

/*Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números 
negativos e a soma dos números positivos desse vetor.
Questão F */


#include <stdio.h>

int main()
{
    
    float vetor[10];
    float positivo = 0, qtd = 0;
    int i = 0;
    
   printf("Insira os 10 valores: \n");
    for (i; i <= 9; i++){
        printf("%d: ", i);
        scanf("%f", &vetor[i]);
    }
    
    for (i = 0; i <= 9; i++){
        if (vetor[i] < 0){
            qtd++;
        }
        
        else{
            positivo += vetor[i];
        }
    }
    
    printf("Quantidade de números negativos: %.2f\n", qtd);
    printf("Soma dos números positivos: %.2f\n", positivo);

    
    return 0;
}

/*Faça um programa que leia um vetor de 10 números. Leia um número 𝑥. Conte os múltiplos 𝑥 do vetor e 
mostre-os na tela. 
Questão G 
*/  

#include <stdio.h>

int main(){
    
    int i,a,b = 0;
    int vetor[10];

 
    printf("Insira os vetores: \n");
    for (i = 0; i <=9; i++){
        printf("%dº: ", i);
        scanf("%d", &vetor[i]);
    }

   printf("\n Insira um número X: ");
   scanf ("%d", &a);
   
   printf("\nSão múltiplos de %d no vetor: ",a);
    
    for(i = 0; i < 10; i++) {
        if(vet[i]%a == 0 ) {
            printf("%d - ",vetor[i]);
            b++;
            
        }
    }
    
    printf("\n\nTotal de multiplos de %d no vetor :%d",a,b);
 

    return 0;
}

/*
Faça um vetor de tamanho 10 preenchido com o seguinte valor: (𝑖 + 5 ∗ 𝑖) ∗ (𝑖 + 1), sendo 𝑖 a posição do 
elemento no vetor. Em seguida imprima o vetor na tela.

Questão H
*/

#include <stdio.h>

int main() {
    
    int vetor[10];
    int i;

    for(i=0; i<10; i++) {
       vetor[i]= (i + 5 * i) * (i + 1);
    }
   
    printf ("Vetor : ");
    for(i=0;i<10;i++){
       printf("%d\t",vetor[i]);
    }

    return 0;
}

/*
Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro. Se o 
código for zero, finalize o programa; se for 1, mostre o vetor na ordem em que foi preenchido; se for 2, mostre 
o vetor na ordem inversa. Caso, o código for diferente de 1 e 2 escreva uma mensagem informando que o 
código é inválido.
 

 Questão I 
*/


#include <stdio.h>

int main()
{
    int vetor[5];
    int i, f;
    
    printf("Insira os 5 valores: \n");
    for (i = 0; i <= 10; i++){
        printf("%d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\n\nEscolha o códico: ");
    scanf("%d", &f);
    
    if(f == 0){
        return 0;
    }
    
    if (f == 1){
        printf("\nValores do vetor:\n");
        for (i = 0; i <= 10; i++){
            printf("%d : ", vetor[i]);
    }
    }
    
    if (f == 2){
        printf("\nValores do vetor:\n");
        for (i = 9; i >= 0; i--){
            printf("%d : ", vetor[i]);
    }
    }
    
    else{
        printf("\nCódigo inválido .");
    }
    
    
    

    return 0;
}
