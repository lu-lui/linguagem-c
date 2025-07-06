/*A matriz abaixo representa um tabuleiro de batalha naval. Onde estão marcados três tipos de embarcações: Lancha=1, Corveta=2, Fragata=3. O jogador irá efetuar 6 disparos, representados por suas posições de índices na matriz (linha, coluna). Faça um programa em C que leia os 6 disparos e conte em caso de acerto quantos pontos o jogador obteve. Lembrando que os códigos das embarcações representam os pontos obtidos em caso de acerto.*/

#include <stdio.h>

int main(){
    int m[6][6], linha, coluna, ponto=0, embarcacao=0;

    printf("BATALHA NAVAL: \n");

    for (int l = 0; l < 6; l++){
        for (int c = 0; c < 6; c++){
            m[l][c] = 0;
        }
    } 
    
    for (int l = 0; l <= 3; l++){
        m[l][3] = 3;
    } 

    for (int c = 0; c <= 2; c++){
        m[2][c] = 2;
    } 

        for (int c = 1; c <= 2; c++){
            m[0][c] = 1;
    } 

    for (int l = 4; l <= 5; l++){
            m[l][0] = 1;
            m[l][4] = 1;
    } 

    for (int l = 0; l <= 1; l++){
            m[l][5] = 1;
    } 

    for (int l = 2; l <= 4; l++){
            m[l][5] = 2;
    } 

    for (int i = 1; i <= 6; i++){
        printf("Digite a linha e a coluna do tiro %d: \nLinha: ", i);
        scanf("%d", &linha);
        printf("Coluna: ");
        scanf("%d", &coluna);
        
        if (m[linha][coluna] > 0){
            ponto += m[linha][coluna];
            embarcacao++;
        }
    }
    
   printf("Voce acertou %d embarcacoes e fez %d pontos \n", embarcacao, ponto);
}