/*8.1.Para que a divisão entre 2 números possa ser realizada,
 *  o divisor não pode ser nulo. Escreva um
algoritmo para ler 2 valores e imprimir o
*  resultado da divisão do primeiro pelo segundo.
* 
* 
* OBS: O algoritmo deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for
fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na construção da
repetição de validação.
* 
*/

#include <stdio.h>

int main ()
{
  
  float r,a,b;
  
  printf("Digite a:");
  scanf("%f", &a);
  printf("Digite b:");
  scanf("%f", &b);
  while( b == 0){
	 printf("valor zero é inv;alido\nDigite b:");
     scanf("%f", &b);
  }
  r = a/b;
  printf("r: %.1f", r);
  }
