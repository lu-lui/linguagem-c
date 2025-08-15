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
        printf("1. Incluir \n2. Listas Todos \n3. Pesquisar aniversariante \n0. Sair \nQual operacao deseja realizar?");
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
                
        case 3:{
                struct data hoje = leData();
                mostraAniversariante(cad, hoje);
        }
        break;
        default:
            printf("Fim...");
        }
    }
}

struct funcionario leFuncionario(){
    struct funcionario f; // define uma variavel local para a funcao leFuncionario
        
    printf("Codigo: ");
    scanf("%d", &f.codigo);
    fflush(stdin);
    printf("Nome: ");
    fgets(f.nome, sizeof(f.nome), stdin);
    printf("Endereco: ");
    fgets(f.endereco, sizeof(f.endereco), stdin);
    printf("Data de aniversario: ");
    f.aniversario = leData();
    printf("Salario: ");
    scanf("%f", &f.salario);

    return f;
}

struct data leData(){
    struct data d;

    printf("Dia: ");
    scanf("%d", &d.dia);
    printf("Mes: ");
    scanf("%d", &d.mes);
    printf("Ano: ");
    scanf("%d", &d.ano);
        
    return d;
}

void mostraAniversariante(struct lista_funcionario c, struct data h) {
    int encontrou = 0;

    for (int i = 0; i < c.num; i++) {
        if (c.fun[i].aniversario.dia == h.dia &&
            c.fun[i].aniversario.mes == h.mes) {
            printf("Aniversariante: %s\n", c.fun[i].nome);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum funcionario faz aniversario hoje.\n");
    }
}


