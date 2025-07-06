/*11.12 Ler um valor (só deve aceitar valores positivos), calcular e escrever seu respectivo fatorial.
OBS: O fatorial de 0 é igual a 1. Fatorial de n = n *(n-1)*(n-2) (n-3)*...*1
Ex: Fatorial de 4 = 4*3*2*1 = 24
[Entrada] | [Entrada] | [Entrada] | [Entrada]
-1        | 3         | 5         | 4
0         |           |           |
          |           |           |
[Saída]   | [Saída]   | [Saída]   | [Saída]
1         | 6         | 120       | 24*/

#include <stdio.h>

int main(){

    int numero, fatorial=1; 

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero < 0){
        printf("Valor invalido, digite um numero positivo: ");
        scanf("%d", &numero);
    }
 
    for (int i = numero; i >= 1; i--){
        fatorial = fatorial * i;
    }
    
    printf("%d", fatorial);
}