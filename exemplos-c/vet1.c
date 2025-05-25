#include<stdio.h>
int main(){
int   s2, c=0;
float media;

int vet[5];


for (int i = 0 ; i < 5; i++){
	printf("Digite vet[%d]: ", i);
    scanf("%d", &vet[i]);
}
s2 = 0;
for (int i = 0 ; i < 5; i++){
	s2 = s2 + vet[i];
}   
           
for (int i = 0 ; i < 5; i++){
	printf("vet[%d] : %d\n", i, vet[i]);
}
printf("Soma %d\n", s2);

media = (float)s2 / 5;

for (int i = 0 ; i < 5; i++){
	if (vet[i] > media)
	  c++;
}
printf("Valores maiores que %f : %d", media, c);

}
