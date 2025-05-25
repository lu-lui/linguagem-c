#include <stdio.h>
#include <string.h>
#define tam 51
char morse_hash [tam][5];
char* morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-·-·--", "·-··-·", "···-··-", "·-···", "-·--·", "-·--·-", "··--·-", "·-·-·", "-···-", "-····-", "---···", "-·-·-·", "·--·-·", "·----·", "--··--", "·-·-·-", "-··-·", "··--··", " "};
char ch, palavra[200];
int ch2;
int main() {

//monta um vetor com os simbolos usando técnica de hashing
for(int i = 97;i<=122;i++){
	strcpy(morse_hash[i%tam], morse[i-97]);	
	printf("%s\n", morse_hash[i%tam]);
}
//le a palavra
printf("Digite a palavra: ");
scanf(" %[^\n]s", palavra);

for (int y =0; y < strlen(palavra); y++){
  ch2 = palavra[y];
  printf("\n");
  for(int i = 0; i < strlen(morse_hash[ch2%tam]);i++){
	  if(morse_hash[ch2%tam][i] == '.')  
         printf("ponto ");//aqui seria o beep
      else
         printf("traco ");   
   } 
}   
}
 
