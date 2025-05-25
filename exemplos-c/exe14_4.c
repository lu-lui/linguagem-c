#include<stdio.h>
int main(){

int c[5];


for (int i = 0 ; i < 5; i++){
	printf("Digite C[%d]: ", i);
    scanf("%d", &c[i]);
}           
for (int i = 0 ; i < 5; i++){
	printf("C[%d] : %d\t", i,c[i]);
}
for (int i = 0 ; i < 5; i++){
	if (c[i] < 0 )
	  c[i] = 0 ;
}
printf("\n\n");
for (int i = 0 ; i < 5; i++){
	printf("C[%d] : %d\t", i,c[i]);
}
}
