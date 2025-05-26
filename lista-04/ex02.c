/*2. Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200. Utilize a função resto para verificar se o número é impar.*/

//Função resto ex: % 2, resto da divisao por 2
#include <stdio.h>

int main(){

    int numero;

    for (numero = 100; numero <= 200; numero++){
        if (numero % 2 != 0)
            printf("%d\n", numero);
    }

}

   