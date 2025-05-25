/*16.1 Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas: 
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz
*/

#include<stdio.h>
int main(){
int  L,C,i,sa = 0, sb=0, sc=0,sd=0,se=0;

//int m[5][5];

int m[5][5] = {{1,1,2,4,5},{6,7,8,8,9},{5,4,3,2,1},{7,6,5,4,3},{1,2,3,4,5}};// declarando uma matriz já com valores
/*
for (L = 0 ; L < 5; L++){
  for (C = 0 ; C < 5; C++){
	 printf("Digite valor: "); 
	 scanf("%d", &m[L][C]);
  }
}	
*/
for (L = 0 ; L < 5; L++){    
  for (C = 0 ; C < 5; C++){ 
	printf("%d ", m[L][C]);
  }	
  printf("\n");
}
sa =  m[3][0] + m[3][1] + m[3][2] + m[3][3] + m[3][4] ; // ASSIM É FEIO
sa=0;
sb=0;
for (i=0 ; i<5 ; i++){
  	sa = sa + m[3][i];
  	sb = sb + m[i][2];
  	sc = sc + m[i][i];
  	sd = sd + m[i][4-i];
	}

for (L = 0 ; L < 5; L++){    
  for (C = 0 ; C < 5; C++){ 
	 se = se + m[L][C];	
  }
}	 

printf("Soma linha 3: %d\nSoma coluna 2: %d\nSoma d principal: %d\nSoma d secundaria: %d\nSoma matriz:%d ", sa, sb, sc, sd, se );

}
