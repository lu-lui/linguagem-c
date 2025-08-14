/*Implemente uma função em C chamada calcula_media_alunos que recebe como parâmetros um vetor de structs Aluno e o número de alunos. A struct Aluno deve ter os seguintes campos: nome, nota1, nota2 e media. A função deve calcular a média das notas de cada aluno e armazenar o resultado no campo media da struct correspondente. Além disso, a função deve retornar a média geral dos alunos.
Estrutura da struct Aluno: 

Requisitos:
- A função calcula_media_alunos deve calcular a média das notas de cada aluno e armazenar o
resultado no campo media da struct correspondente.
- A função calcula_media_alunos deve retornar a média geral dos alunos.
- A função calcula_media_alunos deve receber como parâmetros um vetor de structs Aluno e o número
de alunos.
- O exemplo de uso deve demonstrar a correta implementação da função calcula_media_alunos.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
    float media;
} Aluno;

//Função a ser implementada:
float calcula_media_alunos(Aluno *alunos, int num_alunos) {
    float soma_total = 0.0;
    
    // Calcula a média de cada aluno e acumula a soma das médias
    for (int i = 0; i < num_alunos; i++) {
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        soma_total += alunos[i].media;
    }
    
    // Retorna a média geral
    return soma_total / num_alunos;
}

//Exemplo de uso:
int main() {

    Aluno alunos[3] = {
        {"Joao", 8.0, 9.0, 0.0},
        {"Maria", 7.0, 8.0, 0.0},
        {"Pedro", 9.0, 10.0, 0.0}
    };
    int num_alunos = 3;
    float media_geral = calcula_media_alunos(alunos, num_alunos);
        
    printf("Media geral: %.2f\n", media_geral);

    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %s: media = %.2f\n", alunos[i].nome, alunos[i].media);
    }

    return 0;
}
