/*4.4.Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso.
Caso o número de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.
Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
OBS: Considere que o usuário poderá informar qualquer valor para o número de lados.*/

#include <stdio.h>

int main(){
    int numeroLados;
    float medidaLados, area, perimetro;

    printf("Numero de lados do poligono REGULAR(3, 4 ou 5): ");
    scanf("%d", &numeroLados);

    if (numeroLados == 5)
        printf("O poligono e um pentagono");
    else
        if (numeroLados == 4){
            printf("Medida dos lados: ");
            scanf("%f", &medidaLados);
            area = medidaLados * medidaLados;
            printf("O poligono e um quadrado de area %.1f", area);
        }
        else 
            if (numeroLados == 3){
            printf("Medida dos lados: ");
            scanf("%f", &medidaLados);
            perimetro = medidaLados * 3;
            printf("O poligono e um triangulo de perimetro %.1f", perimetro); 
        }
            else 
                if (numeroLados < 3)
                    printf("NAO E UM POLIGONO");
                else
                    printf("POLIGONO NAO IDENTIFICADO");           
    }