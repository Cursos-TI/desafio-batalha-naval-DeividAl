#include <stdio.h>

int main() {
    
    //LINHA DE CARACTERES
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    // CRIANDO O TABULEIRO
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
    };
    // ADICIONANDO NAVIO
    
    tabuleiro[3][3]= 3;
    tabuleiro[3][4]= 3;
    tabuleiro[3][5]= 3;
    
    //MOSTRANDO O TABULEIRO COM O NAVIO
    
    printf("!!!TABULEIRO BATALHA NAVAL!!!\n");
    for(int i = 0; i < 10; i++) {
        printf(" %c", linha[i]);       //LETRAS DO TABULEIRO
    }
    for(int j = 0; j < 10; j++) {           //0 A 9 HORIZONTAL
        printf("\n%i ", j);
        for(int k = 0; k < 10; k++) {
            printf("%d ", tabuleiro[j][k]);
        }
    }
    return 0;
}