/*15.12 Ler um vetor R de 10 elementos e um vetor S de 20 elementos . A seguir gere um vetor X que contenha uma única ocorrência dos elementos comuns a R e S (intersecção). Após completar o preenchimento escrever o vetor X. Considere que nos vetores R e S podem existir elementos repetidos.
[Entrada]
7 4 4 5 7 2 1 3 4 6 (vetor R)
12 4 4 8 27 12 11 31 42 61 5 2 9 9 1 2 17 9 2 19(vetor S)
[Saída]
4 5 2 1 (vetor X)*/

#include <stdio.h>

int main() {
    int R[10], S[20], X[10];
    int i, j, k;
    int x = 0;
    int existe;

    printf("Vetor R:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &R[i]);
    }

    printf("Vetor S:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &S[i]);
    }

    for (i = 0; i < 10; i++) {

        int achou = 0;
        for (j = 0; j < 20; j++) {
            if (R[i] == S[j]) {
                achou = 1;
                break;
            }
        }

        if (achou) {
            existe = 0;
            for (k = 0; k < x; k++) {
                if (X[k] == R[i]) {
                    existe = 1;
                    break;
                }
            }

            if (!existe) {
                X[x] = R[i];
                x++;
            }
        }
    }

    printf("Vetor X:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");
}