/*Escrever um algoritmo que leia uma nota e mostre o conceito equivalente. Suponha a seguinte tabela de conversão.
Nota Conceito
de 0.0 até 5.0 == D
Acima de 5.0 até 7.0 == C
Acima de 7.0 até 9.0 == B
Acima de 9.0 até 10.0 == A*/

#include <stdio.h>

    int main(){
        float nota;
        
    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota > 9 && nota <= 10)
        printf("Conceito: A");
    else
        if (nota > 7 && nota <= 9)
            printf("Conceito: B");
        else
            if (nota > 5 && nota <= 7)
                printf("Conceito: C");
            else
                if (nota >= 0 && nota <= 5)
                    printf("Conceito: D");
                else
                    printf("Nao e uma nota aceita");
    }
