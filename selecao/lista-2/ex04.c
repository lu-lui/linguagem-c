/*Faça um algoritmo que leia 3 números e diga se podem ser lados de um triângulo. Observe: A, B e C são lados de um triângulo se: A < (B+C) e B < (C+A) e C < (A+B)*/

#include <stdio.h>

    int main(){
        float valor1, valor2, valor3;

        printf("Digite tres valores e veja se eles podem ser lados de um triangulo: ");
        scanf("%f%f%f", &valor1, &valor2, &valor3);

        if (valor1 < (valor2+valor3) && valor2 < (valor3+valor1) && valor3 < (valor1+valor2))
            printf("Podem ser lados de um triangulo!");
        else
            printf("Nao podem ser lados de um triangulo!");
    }