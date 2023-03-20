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

/*
Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste 
vetor, armazenando o resultado em outro vetor. Os conjuntos possuem 10 elementos cada. Imprimir todos os 
conjuntos.


Questão B 
*/

#include <stdio.h>

int main() {
    float vetor[10], quad[10];

    
    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        quad[i] = vetor[i] * vetor[i];
    }

   
    printf("\nVetor lido: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\nQuadrados: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", quad[i]);
    }
    printf("\n");

    return 0;
}

/*
Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui

Questão C 
*/

#include <stdio.h>

int main() {
    int vetor[10];
    int i, count = 0;

    printf("Digite os 10 valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) { 
            count++;
        }
    }

    printf("O vetor possui %d valores pares.\n", count);

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


/*
Elabore um algoritmo em linguagem C que ordene os elementos de um vetor da forma crescente

Questão J
*/

#include <stdio.h>

void elabora(int vetor[], int tam) {
  int i, j, aux;
  for (i = 0; i < tam - 1; i++) {
    for (j = 0; j < tam - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

int main() {
  int vetor[10] = {15,20,30,40,50,60,70,2,4,5};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int i;

  printf("Vetor não ordenado:\n");
  for (i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  elabora(vetor, tam);

  printf("\n\nVetor ordenado:\n");
  for (i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}

/*
Desenvolva um código em C que leia dois vetores inteiros de tamanho iguais e calcule a distância de Hamming. 
A distância de Hamming é dada o número de posições nas quais elas diferem entre si. Exemplo: 1011 e 1111 
possuem distância de Hamming 1 pois se diferem em apenas 1 posição.


Questão K

*/

#include <stdio.h>

int main() {
  int vetor1[100], vetor2[100], tam, i, distancia = 0;

  printf("Digite o tamanho dos vetores: ");
  scanf("%d", &tam);

  printf("Digite os elementos do primeiro vetor:\n");
  for (i = 0; i < tam; i++) {
    scanf("%d", &vetor1[i]);
  }

  printf("Digite os elementos do segundo vetor:\n");
  for (i = 0; i < tam; i++) {
    scanf("%d", &vetor2[i]);
  }

  for (i = 0; i < tam; i++) {
    if (vetor1[i] != vetor2[i]) {
      distancia++;
    }
  }

  printf("A distância de Hamming entre os dois vetores é: %d", distancia);

  return 0;
}

/*

Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui. 

Questão L
*/

#include <stdio.h>

int main() {
  int matriz[4][4];
  int i, j, cont = 0;


  printf("Digite os valores da matriz 4x4:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

 
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] > 10) {
        cont++;
      }
    }
  }

  printf("A matriz possui %d valores maiores que 10.", cont);

  return 0;
}

/*
Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a 
matriz obtida. 


Questão M 

*/


#include <stdio.h>

int main() {
  int matriz[5][5];
  int i, j;

  
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        matriz[i][j] = 1;
      } else {
        matriz[i][j] = 0;
      }
    }
  }

  
  printf("Matriz obtida:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
/*
Leia uma matriz 4 x 4, imprima a matriz e retorne à localização (linha e a coluna) do maior valor.

Questão N 

*/


#include <stdio.h>

int main() {
  int matriz[4][4], maior, i, j, l_maior, c_maior;

  
  printf("Digite os elementos da matriz 4x4:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  
  printf("Matriz:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  
  maior = matriz[0][0];
  l_maior = 0;
  c_maior = 0;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        l_maior = i;
        c_maior = j;
      }
    }
  }

  
  printf("O maior valor da matriz é %d, na linha %d e coluna %d.\n", maior, l_maior, c_maior);

  return 0;
}


/* 
Leia uma matriz 3 x 3. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, 
ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.

Questão O

*/

#include <stdio.h>

int main() {
  int matriz[3][3], valor, i, j, encontrado = 0;

  
  printf("Digite os elementos da matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  
  printf("Digite o valor a ser procurado na matriz:\n");
  scanf("%d", &valor);

  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (matriz[i][j] == valor) {
        encontrado = 1;
        printf("O valor %d foi encontrado na linha %d e coluna %d.\n", valor, i, j);
      }
    }
  }

  
  if (!encontrado) {
    printf("O valor %d não foi encontrado na matriz.\n", valor);
  }

  return 0;
}


/*
Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas. Ler 
um valor e escrever se é positivo ou negativo (considere o valor zero como positivo). 

Questão P 
*/

#include <stdio.h>

int main() {
  int matriz1[4][4], matriz2[4][4], matriz3[4][4], i, j, valor;

  
  printf("Digite os números da primeira matriz 4x4:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz1[i][j]);
    }
  }

  printf("Digite os números da segunda matriz 4x4:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz2[i][j]);
    }
  }

  
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz1[i][j] > matriz2[i][j]) {
        matriz3[i][j] = matriz1[i][j];
      } else {
        matriz3[i][j] = matriz2[i][j];
      }
    }
  }

  
  printf("A terceira matriz 4x4 tem os maiores valores de cada posição:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", matriz3[i][j]);
    }
    printf("\n");
  }

  
  printf("Digite um valor:\n");
  scanf("%d", &valor);

  if (valor >= 0) {
    printf("O valor digitado é positivo.\n");
  } else {
    printf("O valor digitado é negativo.\n");
  }

  return 0;
}


/* 
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal, 
abaixo da diagonal principal e os que estão na diagonal principal. Imprima os três resultados.

Questão q 

*/

#include <stdio.h>

int main() {
  int matriz[3][3], i, j, s_acima = 0, s_abaixo = 0, s_diagonal = 0;

  printf("Digite os números da matriz 3x3:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i < j) {
        s_acima += matriz[i][j];
      } else if (i > j) {
        s_abaixo += matriz[i][j];
      } else {
        s_diagonal += matriz[i][j];
      }
    }
  }

 
  printf("A soma dos números acima da diagonal principal é: %d\n", s_acima);
  printf("A soma dos números abaixo da diagonal principal é: %d\n", s_abaixo);
  printf("A soma dos números na diagonal principal é: %d\n", s_diagonal);

  return 0;
}

/* 
Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B

Questão r 

*/
#include <stdio.h>

#define TAM 3 

int main() {
  int D[TAM][TAM], F[TAM][TAM], G[TAM][TAM];
  int i, j, z;

  
  printf("Digite os elementos da matriz A:\n");
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      scanf("%d", &D[i][j]);
    }
  }

  
  printf("Digite os elementos da matriz B:\n");
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      scanf("%d", &F[i][j]);
    }
  }

  
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      G[i][j] = 0; // Inicializa o elemento da matriz C como zero
      for (z = 0; z < TAM; z++) {
        G[i][j] += D[i][k] * F[k][j]; // Multiplica as matrizes e acumula o resultado em C
      }
    }
  }

 
  printf("Matriz G (resultado da multiplicacao de D e F):\n");
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      printf("%d ", G[i][j]);
    }
    printf("\n");
  }

  return 0;
}


/* 
Elabore um programa que tendo duas matrizes 3X3, imprima a soma dessas matrizes.

Questão S 

*/

#include <stdio.h>

int main() {
  int matrizD[3][3], matrizF[3][3], matrizG[3][3];
  int i, j;
  
  printf("Digite os elementos da matriz A:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matrizD[i][j]);
    }
  }
  
  printf("\nDigite os elementos da matriz B:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matrizF[i][j]);
    }
  }
  
  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matrizG[i][j] = matrizD[i][j] + matrizF[i][j];
    }
  }
  
  
  printf("\nMatriz resultante:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matrizG[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

/*
Leia uma matriz 3X3 do teclado, calcule e imprima a sua matriz transposta

Questão T

*/

#include <stdio.h>

int main() {
  int matriz[3][3];
  int i, j;
  
  
  printf("Digite os Números da matriz:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  
 
  int tpt[3][3];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      tpt[j][i] = matriz[i][j];
    }
  }
  
  
  printf("\nMatriz transposta:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", tpt[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

/*
Faça um programa que leia uma matriz 4X4 e imprima a média aritmética dos números das linhas e das 
colunas dessa matriz.

Questão U 

*/


#include <stdio.h>

int main() {
  int matriz[4][4];
  int i, j;
  
 
  printf("Digite os números da matriz:\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  
  
  printf("\nMédia das linhas:\n");
  for (i = 0; i < 4; i++) {
    int soma = 0;
    for (j = 0; j < 4; j++) {
      soma += matriz[i][j];
    }
    float media = (float) soma / 4;
    printf("Linha %d: %.2f\n", i+1, media);
  }
  
  
  printf("\nMédia das colunas:\n");
  for (j = 0; j < 4; j++) {
    int soma = 0;
    for (i = 0; i < 4; i++) {
      soma += matriz[i][j];
    }
    float media = (float) soma / 4;
    printf("Coluna %d: %.2f\n", j+1, media);
  }
  
  return 0;
}

/*
Gerar e imprimir uma matriz de tamanho 4 x 14, onde seus elementos são da forma:

Questão V

*/
#include <stdio.h>

int main() {
  int A[4][14];

  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 14; j++) {
      if (i < j) {
        A[i][j] = 2 * i + 7 * j - 2;
      } else if (i == j) {
        A[i][j] = 3 * i * i - 1;
      } else {
        A[i][j] = 4 * i * i * i - 5 * j * j + 1;
      }
    }
  }

 
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 14; j++) {
      printf("%5d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
/*
Ler uma matriz de dimensões especificadas pelo usuário e imprima a soma das linhas e colunas dessa matriz.

Questão W 

*/
#include <stdio.h>

int main() {
  int matriz[5][8];


  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

 
  for (int i = 0; i < 5; i++) {
    int somaLinha = 0;
    for (int j = 0; j < 8; j++) {
      somaLinha += matriz[i][j];
    }
    printf("Soma da linha %d: %d\n", i + 1, somaLinha);
  }

 
  for (int j = 0; j < 8; j++) {
    int somaColuna = 0;
    for (int i = 0; i < 5; i++) {
      somaColuna += matriz[i][j];
    }
    printf("Soma da coluna %d: %d\n", j + 1, somaColuna);
  }

  return 0;
}


