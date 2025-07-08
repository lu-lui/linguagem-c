/*15.9 Ler um vetor B de 9 elementos(reserve espaço para 10 elementos),um valor X e um valor P que representa um posição dentro do vetor (validar o valor P aceitando apenas valores válidos: 0 a 8) . Incluir o valor X na posição P do vetor B fazendo com que os elementos existentes dentro do vetor (da posição em diante) sejam deslocados de uma posição para o final (Considere que existe espaço no vetor para o deslocamento). Logo após o processamento escrever o vetor B.*/

 //parecido com o ex08

 #include <stdio.h>

 int main(){
    int B[10], X, P;

    printf("Vetor B: \n");
    for (int i = 0; i < 9; i++){
        scanf("%d", &B[i]);
    }

    printf("Valor X: ");
    scanf("%d", &X);

    printf("Posicao de %d no vetor: ", X);
    scanf("%d", &P);

    while (P < 0 || P > 8){
        printf("Posicao invalida, escolha uma posicao entre 0 e 8: ");
        scanf("%d", &P);
    }

    for (int i = 9; i > P; i--){
        B[i] = B[i-1];
    }

    B[P] = X;
    
    for (int i = 0; i < 10; i++){
        printf("%d ", B[i]);
    }
 }