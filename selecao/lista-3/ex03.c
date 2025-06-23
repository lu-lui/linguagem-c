/*4.3.Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5.*/

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
        else {
            printf("Medida dos lados: ");
            scanf("%f", &medidaLados);
            perimetro = medidaLados * 3;
            printf("O poligono e um triangulo de perimetro %.1f", perimetro); 
        }
    }
