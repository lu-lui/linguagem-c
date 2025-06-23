/*Exercícios 11 – Algoritmos com repetição V
11.1 Ler 10 valores e escrever quantos destes valores são negativos.*/

 #include <stdio.h>

 int main(){
    
    float valor;
    int negativo=0;

    for (int i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if(valor < 0)
            negativo++;
    }

    printf("Quantidade de valores negativos: %d", negativo);
 }
