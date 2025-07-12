#include <stdio.h>
#include <string.h>
int main() {
char s1[20], s2[20];
printf("s1 = "); scanf("%s", s1);
printf("s2 = "); scanf("%s", s2);

if (strcmp(s1,s2) == 0)
   printf("iguais");
else{
   strcat(s1,s2);
   printf("%s", s1); 
   }   

 }
 
