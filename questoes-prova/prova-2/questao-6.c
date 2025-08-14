/*Dado o código abaixo implemente as funções:

struct funcionario leFuncionario();
DESCRIÇÃO: Lê os dados de um funcionário e retorna a estrutura deste funcionário lido, para ler a data deve ser usada a função leData();
ENTRADA(PARÂMETROS): Nenhuma
SAIDA(RETURN): struct Funcionario

struct data leData();
DESCRIÇÃO: Função lê uma data no formato dia, mes, ano e retorna uma estrutura data com valores lidos;
ENTRADA(PARÂMETROS): Nenhuma
SAIDA(RETURN): struct data

struct mostraAniversariante(struct lista_funcionario c, struct data h);
DESCRIÇÃO: Função recebe a lista de funcionários e a data do dia, logo após escreve o nome dos funcionários que estão de aniversário, ou uma mensagem que ninguém faz aniversário neste dia;
ENTRADA(PARÂMETROS): Lista de funcionarios, data do dia
SAIDA(RETURN): nenhuma*/

#include <stdio.h>
#include <string.h>

#define tam 20 //tamanho da lista de funcionarios

struct data {
    int dia, mes, ano;
};

struct funcionario {
    int codigo;
    char nome[80];
    char endereco[100];
    struct data aniversario;
    float salario;
};

struct lista_funcionario{
    struct funcionario fun[tam]; //vetor de funcionarios
    int num; //numero de funcionarios armazenados
};

//protótipo das funções
struct funcionario leFuncionario();
struct data leData();
void mostraAniversariante(struct lista_funcionario c, struct data h);
//--------------------------------------------------
#include <stdio.h>

int main(){
    struct lista_funcionario cad; //define uma variavel "cad" de tipo "struct lista_funcionario"
    cad.num = 0; //numero de funcionarios cadastrados
    int op = 1;

    while (op){ //mostra menu de opções
        printf("\1. Incluir \n2. Listas Todos \n3. Pesquisar aniversariante \n0. Sair \nQual operacao deseja realizar?");
        scanf("%d", &op);

        switch (op){
        case 1:
            if (cad.num < tam)
                cad.fun[cad.num++] = leFuncionario();
            else
                printf("Vetor cheio\n");    
        break;
        
        case 2:
            if (cad.num > 0)
                for (int i = 0; i < cad.num; i++){
                    printf("Cod: %d \nNome: %s \n", cad.fun[i].codigo, cad.fun[i].nome);
                }
            else
                printf("Nenhum registro a ser mostrado\n");
        break;
                
        case 3:
    //aqui deve ser chamada a função leData para a data do dia e chamar a função mostra_aniversariante 
        break;
        default:
            printf("Fim...");
        }
    }
}


