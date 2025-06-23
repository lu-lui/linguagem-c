/*8.8. Reescreva o algoritmo do exercício 7.4 (triângulo equilátero, isósceles e escaleno) para que após a leitura dos dados ( a medida dos 3 lados do triângulo) seja impressa a mensagem. Os dados informados estão corretos (1.sim/2.não)? solicitando ao usuário uma resposta. Caso a resposta seja 1 a execução deve continuar normalmente escrevendo o tipo de triângulo, caso contrário a leitura dos dados (a medida dos 3 lados) deverá ser repetida.

(Exercício 7.4??)*/

 #include <stdio.h>

 int main(){
    float l1, l2, l3;
    int resposta;

    do {
        printf("Digite os tres lados do triangulo:\nLado 1: ");
        scanf("%f", &l1);

        printf("Lado 2: ");
        scanf("%f", &l2);

        printf("Lado 3: ");
        scanf("%f", &l3);

        printf("Os dados estao corretos?\n1.Sim 2.Nao\n");
        scanf("%d", &resposta);
    } while (resposta == 2);
    
    if (l1 == l2 && l2 == l3)
        printf("O triangulo e equilatero");
    else 
        if ((l1 != l2 && l2 == l3) || (l1 != l2 && l1 == l3) || (l1 != l3 && l1 == l2))
            printf("O triangulo e isoceles");
        else
            printf("O triangulo e escaleno");
 }