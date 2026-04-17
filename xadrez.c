#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i, p, n;

    printf("selecione a peça que gostaria de movimentar:\n");
    printf("1- bispo\n");
    printf("2- torre\n");
    printf("3- rainha\n");
    scanf("%d", &p);

    printf("digite a quantidade de movimentos que gostaria de executar:\n");
    scanf("%d", &n);

    switch (p){
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        case 1:
        i = 1;
        while (n >= i){
            printf("cima\n");
            printf("direita\n");
            i++;
        }
        break;
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        case 2:
        i = 1;
        for (i = 1; i <= n; i++){
        printf("direita\n");
        }
        break;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        case 3:
        i = 1;
        do {
            printf("esquerda\n");
            i++;

        } while (n >= i);

        break;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
        default:
            printf("opção invalida\n");
    }
    return 0;
}
