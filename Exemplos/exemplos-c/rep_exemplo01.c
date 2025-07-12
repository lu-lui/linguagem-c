/* 
 * Calcular o reajuste de  um produto vendido por um empresa
 *  de modo que o produto com valor inferior a R$ 100,00
 *  tenha um reajuste de 10% e com valor superior
 *  tenha um reajuste de 3%. 
 * 
 * */

#include <stdio.h>

int main ()
{
   
   float preco, p_aumento;
    
   printf("Digite preço do produto:");
   scanf("%f", &preco ); 
   
   if (preco < 100){
     p_aumento = preco + preco * 0.1;
   }
   else{
	 p_aumento = preco + preco * 0.03;
   }
	   
   printf("\n\nPreco reajustado: %.2f",p_aumento);   
}	   
