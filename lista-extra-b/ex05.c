/*9.5.A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um algoritmo para ler o número de gols marcados pelo Inter, o número de gols marcados pelo GRÊMIO em um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo após escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gol smarcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
-Quantos GRENAIS fizeram parte da estatística.
-O número de vitórias do Inter.
-O número de vitórias do Grêmio.
-O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou NÃO HOUVE VENCEDOR).*/

#include <stdio.h>

int main(){
   int gremio, inter, empate=0, resposta, grenal=0, gremioVence=0, interVence=0; 

    do{
        printf("PLACAR DO GRENAL: \nGols do Inter: ");
        scanf("%d", &inter);

        while(inter < 0){
            printf("Resposta invalida, digite novamente: ");
            scanf("%d", &inter);
        }

        printf("Gols do Gremio: ");
        scanf("%d", &gremio);

        while(gremio < 0){
            printf("Resposta invalida, digite novamente: ");
            scanf("%d", &gremio);
        }

        if(inter > gremio){
            interVence++;
            printf("Vencedor: INTER \n");
        } else
            if (inter < gremio){
                gremioVence++;
                printf("Vencedor: GREMIO \n");
            } else {
                empate++;
                printf("EMPATE \n");
            }

        grenal++;

        printf("Novo GRENAL? \n1.SIM 2. NAO\n");
        scanf("%d", &resposta);

        while (resposta < 1 || resposta > 2){
            printf("Resposta invaida, digite novamente: ");
            scanf("%d", &resposta);
        }
        
    } while (resposta != 2);

    printf("Quantidade de grenais: %d \nVitorias do Inter: %d \nVitorias do Gremio: %d \nQuantidade de empates: %d \n", grenal, interVence, gremioVence, empate);

    if (interVence > gremioVence)
        printf("Inter venceu mais grenais");
    else
        if (interVence < gremioVence)
            printf("Gremio venceu mais grenais");   
        else
            printf("Nao houve vencedor");
}