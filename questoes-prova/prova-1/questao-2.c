/*2. Escreva um programa que leia o salario de 30 individuos (aceitar somente valores positivos, validando o valor lido). Para cada valor lido calcule e esreva um aumento de salario segundo dados abaixo:
3% para salário >= 3000
10% para salário entre 1000 e 3000
15% para salário <= 1000.*/

#include <stdio.h>

int main(){
    float salario, aumento;

    for (int x = 1; x <= 30; x++){
        printf("Digite o salario atual: ");
        scanf("%f", &salario);

        while (salario < 0){
            printf("Valor invalido, digite novamente: ");
            scanf("%f", &salario);
        }

        if(salario >= 3000)
            aumento = salario * 1.03;
        else
            if(salario <= 1000)
                aumento = salario * 1.15;
            else
                aumento = salario * 1.10;

        printf("O salario aumentou de R$%.2f para R$%.2f\n", salario, aumento);
    }
}