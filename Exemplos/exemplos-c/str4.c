#include <stdio.h>
#include <string.h>

int main()
{
int i;
char s1[20], s2[20], s3[20];
scanf("%s", s1);
for (i=0; s1[i] != '\0'; i++) 
  s2[i] = s1[i];
//s2[i] = '\0';
printf("s1 = %s\ns2 = %s\n", s1, s2);

strcpy(s3,s1);
strcat(s3,s2);

printf("s1 = %s\ns3 = %s\n", s1, s3);


}
