/*1) Faça um programa que possua uma estrutura para armazenar 2 horários (hora, minuto, segundo). Esse programa deve ler esses dois horários e informar a diferença entre eles (informar a diferença no formato hh:mm:ss).*/

#include <stdio.h>

struct h{
    int hora, minuto, segundo;
};

struct h diferencaHora(struct h inicio, struct h fim){
    struct h dif; //diferença
    int segInicio, segFim, diferencaSeg;

    segInicio = inicio.hora * 3600 + inicio.minuto * 60 + inicio.segundo; //converte p segundo
    segFim = fim.hora * 3600 + fim.minuto * 60 + fim.segundo; //converte tudo p segundo
    diferencaSeg = segFim - segInicio; //calcula diferença
    dif.hora = diferencaSeg / 3600; //converte os segundos p hora inteira
    diferencaSeg %= 3600; //diferencaSeg recebe o resto da sua divisao por 3600
    dif.minuto = diferencaSeg / 60; // converte o restante para minutos;
    dif.segundo = diferencaSeg % 60; //dif.segundo recebe o restante dos segundos que sobraram dos minutos
    return dif; //vai retornar as diferenças calculadas para o main 
}

int main(){
    struct h t[2], diferenca;

    for (int i = 0; i < 2; i++){
        printf("Digite hora: ");
        scanf("%d", &t[i].hora); //le a hora inicial/final
        printf("Digite minuto: ");
        scanf("%d", &t[i].minuto); //le o minuto inicial/final
        printf("Digite segundo: ");
        scanf("%d", &t[i].segundo); //le o segundo inicial/final
    }

    diferenca = diferencaHora(t[0],t[1]); //chamada a função diferencaHora(h,h)

    printf("Tempo decorrido %d : %d : %d", diferenca.hora, diferenca.minuto, diferenca.segundo);
}