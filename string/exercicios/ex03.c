/* 3. Escreva um programa que conte a quantidade de palavras de um texto digitado pelo teclado. (Uma palavra é qualquer sequência de caracteres separada por um ou mais espaços).*/

#include <string.h>
#include <stdio.h>

int main(){
   char texto[200];
   int i, c = 1;

   while (1){
       c=1;

       printf("Digite um texto: \n");
       fgets(texto, sizeof(texto), stdin);
       i = 0;
       while (texto[i] == ' ')
           i++;

   for (; texto[i] != '\0'; i++){
       if (texto[i] == ' ' && texto[i-1] != '\0' && texto[i+1 != '\0'])
       c++;
   }

   printf("O texto possui %d palavras. \n", c);
   } 
}
