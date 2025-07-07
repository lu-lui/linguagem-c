#include<stdio.h>
struct h {
  int hora, minuto,segundo;
};

struct h diferenca_hora(struct h i,struct h f){
	struct h d;
	int segundosInicio, segundosFim, diferencaSegundos;
	
	segundosInicio = i.hora * 3600 + i.minuto * 60 + i.segundo;
    segundosFim = f.hora * 3600 + f.minuto * 60 + f.segundo;
    diferencaSegundos = segundosFim - segundosInicio;
    d.hora = diferencaSegundos / 3600;
    diferencaSegundos %= 3600;
    d.minuto = diferencaSegundos / 60;
    d.segundo = diferencaSegundos % 60;
	return d;
}

int main(){
  struct h t[2], diferenca;
  
  for(int i =0; i<2;i++){
    printf("Digite hora: ");
    scanf("%d", &t[i].hora);
    printf("Digite minuto: ");
    scanf("%d", &t[i].minuto);
    printf("Digite segundo: ");
    scanf("%d", &t[i].segundo);
    printf("%d : %d : %d\n",t[i].hora, t[i].minuto, t[i].segundo);
  }
  
  diferenca = diferenca_hora(t[0],t[1]);//Chamada à função diferenca_hora(h,h)
    
  printf("Tempo decorrido %d : %d : %d", diferenca.hora, diferenca.minuto,diferenca.segundo);

}


