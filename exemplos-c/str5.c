#include <stdio.h>
#include <string.h>
int main() {
char nome[20];
float n1,n2;
for(int x=1; x < 5 ; x++){
  printf("nome = "); scanf(" %[^\n]s", nome);
  printf("n1 = "); scanf("%f", &n1);
  printf("n2 = "); scanf("%f", &n2);
  
  printf("nome %s\tn1:%f\tn2:%f\n",nome,n1,n2);
}
 }
 
