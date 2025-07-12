#include<stdio.h>
#include<string.h>

#define NA 2

struct aluno {
      int codigo;
      char nome[200];
      float nota1,nota2;
};

struct aluno a[NA]; //definição da variavel


int main(){
	
	for(int i=0; i<NA;i++){
	  printf("Digite Codigo ");	
	  scanf("%d",&a[i].codigo);
	  printf("Digite Nome ");	
	  scanf("%s",a[i].nome);
	  printf("Digite Nota 1 ");	
	  scanf("%f",&a[i].nota1);
	  printf("Digite Nota 2 ");	
	  scanf("%f",&a[i].nota2);
    }
    
    for(int i=0; i<NA;i++){
	  printf("Cod: %d\tNome: %s\tMedia:%.2f\n",a[i].codigo,a[i].nome,(a[i].nota1+a[i].nota2)/2 );
    }
    
    
    
}
