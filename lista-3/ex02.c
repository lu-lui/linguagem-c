/*4.2.Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a palavra EMPATE.*/

#include <stdio.h>

int main(){
    int Inter, Gremio;

    printf("Resultado do GreNal:\nGols do Inter: ");
    scanf("%d", &Inter);

    printf("Gols do Gremio: ");
    scanf("%d", &Gremio);

    printf("Placar: Inter %d x %d Gremio\n", Inter, Gremio);

    if (Inter > Gremio)
        printf("Vencedor: INTERNACIONAL");
    else
        if (Inter < Gremio)
            printf("Vencedor: GREMIO");
        else
            printf("EMPATE");
}