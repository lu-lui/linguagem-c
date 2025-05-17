/*4.5.Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4 Multiplicação). Calcular e escrever o resultado dessa operação sobre os dois valores lidos.*/

#include <stdio.h>

int main (){
    float valor1, valor2, resultado;
    int calculo;
    
    printf("Escreva dois valores:\nValor 1: ");
    scanf("%f", &valor1);
    printf("Valor 2: ");
    scanf("%f", &valor2);
    printf("Escolha uma opcao:\n1 - Adicao;\n2 - Subtracao;\n3 - Divisao;\n4 - Multiplicacao.\n");
    scanf("%d", &calculo);

    if (calculo == 1){
        resultado = valor1 + valor2;
        printf("Total: %.1f", resultado);
    } else 
        if (calculo == 2){
            resultado = valor1 - valor2;
            printf("Resultado: %.1f", resultado);
        } else
            if (calculo == 3){
                resultado = valor1 / valor2;
                printf("Resultado: %.1f", resultado);
            } else
                if (calculo == 4){
                    resultado = valor1 * valor2;
                    printf("Resultado: %.1f", resultado);
                } else
                    printf("Nao e uma opcao aceita");
}