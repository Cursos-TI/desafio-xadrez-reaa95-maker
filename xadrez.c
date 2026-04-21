#include <stdio.h>

void moverBispo(int casas){
    if(casas > 0){
        for (int i = 1; i <=1; i++){
            printf("Cima. \n");
            for (int j = 1; j <=1; j++){
                printf("Direita. \n");
            }
        moverBispo(casas - 1);
        }
    }
}
void moverTorre(int casas){
    if(casas > 0){
        printf("Direita. \n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda. \n");
        moverRainha(casas - 1);
    }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo. \n");
    moverBispo(5);
        
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da Torre. \n");
    moverTorre(8);        

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimento da Rainha. \n");
    moverRainha(3);
       

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do Cavalo. \n");
    for (int passo = 1; passo <= 10; passo++) {
    
    if (passo <= 2) {
        printf("Cima.\n");
        continue; 
    }
                
    if (passo == 3) {
        printf("Direita.\n");
        break; 
    }         
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
         return 0;   
    }
   

