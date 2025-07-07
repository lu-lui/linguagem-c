#include <stdio.h>

float le_nota();


int main(){

  float nota, nota2;
  
  nota = le_nota();
  nota2 = le_nota();

}
float le_nota(){
	float n;
	
	printf("Digite nota:");
	scanf("%f", &n);
	while (n<0 || n>10){
		printf("Nota Invalida, disigte novamente: ");
		scanf("%f",&n);
	}
	return n;
}
