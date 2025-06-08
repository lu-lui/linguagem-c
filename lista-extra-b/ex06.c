/*9.6.Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). Ao ser informado o código do combustível, o seu respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível.*/

#include <stdio.h>

int main(){
    int alcool = 0, gasolina = 0, diesel = 0, resposta;

    do{
        printf("Digite o tipo de combustivel abastecido: \n1.Alcool \n2.Gasolina \n3.Diesel \n4.Fim\n");
        scanf("%d", &resposta);

        while (resposta < 1 || resposta > 4){
            printf("Valor invalido, digite novamente: ");
            scanf("%d", &resposta);
        }

        if(resposta == 1){
            alcool++;
            printf("ALCOOL\n");
        } else
            if (resposta == 2){
                gasolina++;
                printf("GASOLINA\n");
            } else
                if (resposta == 3){
                    diesel++;
                    printf("DIESEL\n");
                }
        
    } while (resposta != 4);

    printf("MUITO OBRIGADO: \nQuantidade de clientes que abasteceram com Alcool: %d \nQuantidade de clientes que abasteceram com Gasolina: %d \nQuantidade de clientes que abasteceram com Diesel: %d", alcool, gasolina, diesel);
}