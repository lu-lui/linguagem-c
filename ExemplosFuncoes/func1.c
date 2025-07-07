#include <stdio.h>

int soma(int x, int z){
	//variavel local
	int r;
	r=x+z;
	return r;
	
};

void area_circulo(float raio){
  printf("Area: %f", raio*raio*3.14);	
}

float comp_circulo (float raio){
	float res;
	res = 2*3.14*raio;
	return res;
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
area_circulo(ra);
printf("comp: %f", comp_circulo(ra)):

 }
 
