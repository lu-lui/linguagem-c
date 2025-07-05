/*11.2 Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo. Escrever o resultado das duas contagens.
[Entrada] [Saída]
5 10 12 7 25 -1 0 13 60 2
 3 (dentro do intervalo)
7 (fora do intervalo)
*/

#include <stdio.h>

int main(){
    
    float valor;
    int dentro=0, fora=0;

    for (int i = 1; i <= 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if(valor >= 10 && valor <= 20)
            dentro++;
        else
            fora++;
    }
    
    printf("Valores dentro do intervalo [10, 20]: %d \nValores fora do intervalo [10, 20]: %d", dentro, fora);

}