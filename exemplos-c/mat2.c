#include<stdio.h>
int main(){
int  L,C;

int mat[3][3];

int mat1[][] = {{1,2},{2,3}};


for (L = 0 ; L < 3; L++){
  for (C = 0 ; C < 3; C++){
	 mat [L][C] = 10;
  }
}	
mat [2][1] = 20;

for (L = 0 ; L < 3; L++){    
  for (C = 0 ; C < 3; C++){ 
	printf("%d ", mat[L][C]);
  }	
  printf("\n");
}
}
