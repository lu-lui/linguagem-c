#include<stdio.h>
#include<string.h>

#define tam 20 //tamanho da lista de alunos

struct aluno {
      int codigo;
      char nome[80];
      float nota1,nota2;
};

struct lista_aluno {
	struct aluno a[tam];//vetor de alunos
	int na;//numero de alunos armazanados
};
//protótipo das funções
struct aluno leAluno();
float le_nota(char msg[20]);


//-----------------------------------------
int main(){
	struct lista_aluno cad;
	cad.na = 0;
	int op=1;
	while (op){
	  // mostra menu de opcoes	
	  printf ("\n1.Incluir\n2.Listas Todos\n3.Pesquisar por nome\n4.Pesquisar maior media\n0. Sair\nQual operação deseja realizar?");
	  scanf("%d",&op);
	  switch (op){
			case 1:
			  if (cad.na < tam )
			    cad.a[cad.na++] = leAluno(); 
			  else
			    printf("Vetor cheio\n");  
			  break;  
			case 2:
			  if (cad.na > 0 )
			    for(int i=0; i<cad.na;i++){
	               printf("Cod: %d\tNome: %s\tMedia:%.2f\n",cad.a[i].codigo,cad.a[i].nome,(cad.a[i].nota1+cad.a[i].nota2)/2);
                } 
			  else
			    printf("Nenhum registro a ser mostrado\n");      
			  break;
			case 3:
			  break;
			default:
			  printf("Fim...");
	  }
	}   
}

//---Funcao le_nota
//le um valor float, validando para nota valida 
//entrada: string contendo a mensagem a ser impressa antes da leitura
//retorno: float
float le_nota(char msg[20]){
	float n;
	
	printf("%s", msg);
	scanf("%f", &n);
	while (n<0 || n>10){
		printf("Nota Invalida, digite novamente: ");
		scanf("%f",&n);
	}
	return n;
}

//---Funcao le_aluno
//le os dados eferentes a um aluno
//retorna estrutura Aluno com dados lidos
struct aluno leAluno(){
	struct aluno a;
	  printf("Digite Codigo ");	
	  scanf("%d",&a.codigo);
	  printf("Digite Nome ");	
	  scanf(" %[^\n]s",a.nome);
	  a.nota1 = le_nota("Digite Nota 1 ");
	  a.nota2 = le_nota("Digite Nota 1 ");
       return a;
}
