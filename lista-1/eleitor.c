//Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
#include <stdio.h>

int main(){
    float eleitores, totalVotos, brancos, nulos, validos, porcBrancos, porcNulos, porcValidos;

    printf("Total de eleitores: \n");
    scanf("%f", &eleitores);
    printf("Numero de votos brancos: \n");
    scanf("%f", &brancos);
    printf("Numero de votos nulos: \n");
    scanf("%f", &nulos);
    printf("Numero de votos válidos: \n");
    scanf("%f", &validos);
    totalVotos = brancos + nulos + validos;
    printf ("Total de votos: %.1f\n", totalVotos);
    printf ("-Porcentagem de votos em relacao ao total de eleitores-\n");
    porcBrancos = brancos / eleitores * 100;
    printf ("Votos brancos: %.1f%%\n", porcBrancos);
    porcNulos = nulos / eleitores * 100;
    printf ("Votos nulos: %.1f%%\n", porcNulos);
    porcValidos = validos / eleitores * 100;
    printf ("Votos validos: %.1f%%\n", porcValidos);
    
    return 0;
}



