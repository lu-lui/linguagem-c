#include <stdio.h>

int soma(int x, int z){
	//variavel local
	int r;
	r=x+z;
	return r;
	
};

float area_circulo(float raio){
  return raio*raio*3.14;	
}



int main() {
int a,b,resultado;
float ra;

printf("digite a: "); 
scanf("%d", &a);
printf("digite b: "); 
scanf("%d", &b);

resultado = soma(a,b); //chamada da função passagem de parametros por valor

printf("soma = %d",resultado);

printf("\nraio: "); 
scanf("%f", &ra);
printf("area: %f", area_circulo(ra));

 }
 
