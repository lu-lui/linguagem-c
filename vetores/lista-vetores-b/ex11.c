/*15.11 Ler um vetor R de 10 elementos e um vetor S de 20 elementos. A seguir gere um vetor X que contenha uma única ocorrência dos elementos existentes em R ou em S (união). Após completar o preenchimento escrever o vetor X. Considere que nos vetores R e S podem existir elementos repetidos.
[Entrada]
7 4 4 5 7 2 1 3 4 6 (vetor R)
12 4 4 8 27 12 11 31 42 61 5 2 9 9 1 2 17 9 2 19(vetor S)
[Saída]
7 4 5 2 1 3 6 12 8 27 11 31 42 61 9 17 19 (vetor X)*/

#include <stdio.h>

int main() {
    int R[10], S[20], X[30];
    int tamX = 0; 
    int existe, i, j;

    printf("Vetor R:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &R[i]);
    }

    printf("Vetor S:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &S[i]);
    }

    for (i = 0; i < 10; i++) {
        existe = 0;
        for (j = 0; j < tamX; j++) {
            if (X[j] == R[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            X[tamX] = R[i];
            tamX++;
        }
    }

    for (i = 0; i < 20; i++) {
        existe = 0;
        for (j = 0; j < tamX; j++) {
            if (X[j] == S[i]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            X[tamX] = S[i];
            tamX++;
        }
    }

    printf("Vetor X:\n");
    for (i = 0; i < tamX; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");
}