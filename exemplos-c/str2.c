#include <stdio.h>
#include <string.h>
int main() {
    char texto[100];
    int i;
    
    printf("digite palavra:");
    scanf(" %s", texto);
    
    for (i=0; texto[i] != '\0'; i++);
       
    printf("\n%d\n", i);
    
    
    printf("%d", (int)strlen(texto));
}
