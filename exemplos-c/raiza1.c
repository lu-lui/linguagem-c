#include<stdio.h>
int main(){
float diven, div, quoc;

printf("Dividendo: ");
scanf("%f",&diven);

printf("Divisor: ");
scanf("%f",&div);

if(div != 0){
quoc= diven/div;
printf("Resultado: %f",quoc);
}else{
printf("Nao existe divisao por 0");
}
}
