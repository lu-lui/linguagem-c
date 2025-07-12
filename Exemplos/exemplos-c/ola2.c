#include<stdio.h>

int main(){
	int x1, v[7] = {100, 50, 20, 10, 5, 2 ,1};
    
    printf("digite x1 ");
    scanf("%d", &x1);
    
    for(int i =0; i  <= 6; i++){
	    printf("R$ %d %d cedulas\n" ,v[i], x1/ v[i] );
	    x1 = x1 % v[i];
	
    }
}
