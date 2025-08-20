#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void bispoFuncao(int i);
void bispoFuncaoNivelMestre(int num);
void torreFuncao(int i);
void rainhaFuncao(int i);
void cavaloFuncao(int i);

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\n========================== Movimentos do bispo nível novato ==========================\n\n");

    const int bispoMove = 5;
    for(int i = 0; i < bispoMove; i++){
        printf("Bispo moveu uma casa para cima\n");
        printf("Bispo moveu uma casa para a direita\n");
    }

    printf("\n========================== Movimentos recursivos do bispo ==========================\n\n");
    bispoFuncao(5);

    printf("\n========================== // ==========================\n\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

       printf("\n========================== Movimentos da torre nível novato ==========================\n\n");

    int torreMove = 5;
    while(torreMove--){
        printf("Torre moveu uma casa para a direita\n");
    }

    printf("\n========================== Movimentos recursivos da torre ==========================\n\n");
    
    torreFuncao(5);

    printf("\n========================== // ==========================\n\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

       printf("\n========================== Movimentos da rainha nível novato ==========================\n\n");

    int rainhaMove = 8;
    do{
        printf("Rainha moveu uma casa para a esquerda\n");
        rainhaMove--;
    }while(rainhaMove > 0);

    printf("\n========================== // ==========================\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n========================== Movimentos do cavalo nível aventureiro ==========================\n\n");

    const int cavaloX = 2;
    int cavaloY = 1;

    while(cavaloY--){
        for(int i = 0; i < cavaloX; i++){
            printf("Cavalo moveu %d casa(s) para baixo\n", i+1);
        }
        printf("Cavalo moveu uma casa para a esquerda\n");
    }

    printf("\n========================== // ==========================\n\n");


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\n========================== Movimento do cavalo nível mestre ==========================\n\n");

    cavaloY = 1;
    while(cavaloY--){
        for(int i = 0; i < cavaloX; i++){
            printf("Cavalo moveu %d casa(s) para baixo\n", i+1);
        }
        printf("Cavalo moveu uma casa para a esquerda\n");
    }

    printf("\n========================== // ==========================\n\n");

    printf("\n========================== Movimentos do bispo nível mestre ==========================\n\n");

    bispoFuncaoNivelMestre(2);

    return 0;
}

void bispoFuncao(int i){
    if(i > 0){
        printf("Bispo moveu uma casa para cima\n");
        printf("Bispo moveu uma casa para a direita\n");
        bispoFuncao(i - 1);
    }
}

void bispoFuncaoNivelMestre(int num){

    if(num <= 0) return;

    for(int i = 0; i < num; i++){
        printf("Bispo moveu uma casa para cima\n");
        for(int j = 0; j < 1; j++){
            printf("Bispo moveu uma casa para a direita\n");
        }
    }

    bispoFuncaoNivelMestre(num -1);
}

void torreFuncao(int i){
    if(i > 0){
        printf("Torre moveu uma casa para a direita\n");
        torreFuncao(i - 1);
    }
}