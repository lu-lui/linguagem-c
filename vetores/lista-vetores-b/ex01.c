/*15.1 Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.*/

 #include <stdio.h>

 int main(){
    int R[5], S[10], X[5];

    printf("Vetor R: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &R[i]);
    }

    printf("Vetor S: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &S[i]);
    }

    printf("Vetor X: ");
    for (int i = 0; i < 10; i++){
      for (int j = 0; j < 5; j++){
        if(R[j] == S[i]){
            X[j] = R[j];
            printf("%d ", X[j]);
        }
      }
    }
    
    
}