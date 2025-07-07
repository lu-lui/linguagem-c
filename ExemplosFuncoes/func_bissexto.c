#include <stdio.h>

struct data {
	int dia,mes,ano;
	}; 


//-------------------------------------------------------
int eh_bissexto(int a){
	
	return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
	
	}	
//-------------------------------------------------------	

int dias_no_mes(int mes, int ano) {
    switch(mes) {
        case 2:
            return eh_bissexto(ano) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}
//-------------------------------------------------------	
struct data le_data(){
	struct data d;
	printf("Digite dia:");
	scanf("%d", &d.dia);
	while(d.dia<1 || d.dia > 31){
		printf("Dia inválido, digite novamente: ");
	    scanf("%d", &d.dia);
	}
	printf("Digite mes:");
	scanf("%d", &d.mes);
	while(d.mes<1 || d.mes > 12){
		printf("Mes inválido, digite novamente: ");
	    scanf("%d", &d.mes);
	}
	printf("Digite ano:");
	scanf("%d", &d.ano);
	while(d.ano<1){
		printf("Ano inválido, digite novamente: ");
	    scanf("%d", &d.ano);
	}
	return d;
}
//-------------------------------------------------------
void mostra_data(struct data d){
	
  printf("%d\t:%d\t:%d",d.dia,d.mes,d.ano);	
}	
//-------------------------------------------------------	
int calcularDiasDesdeInicioDoAno(struct data d) {
    int dias = d.dia;

    for (int i = 1; i < d.mes; i++) {
        dias += dias_no_mes(i, d.ano);
    }

    return dias;
}



//-------------------------------------------------------	
int calcularDiasTotais(struct data d) {
    int dias = 0;

    for (int i = 1; i < d.ano; i++) {
        dias += eh_bissexto(i) ? 366 : 365;
    }

    dias += calcularDiasDesdeInicioDoAno(d);

    return dias;
}
 //-------------------------------------------------------	
int diferencaEntreDatas(struct data d1, struct data d2) {
    int diasData1 = calcularDiasTotais(d1);
    int diasData2 = calcularDiasTotais(d2);

    return diasData2 - diasData1;
}

int main(){
	struct data dIni,dFim;
	int ano;
	
	printf("Digite ano: ");
	scanf("%d", &ano);
	
	if (eh_bissexto(ano))
	  printf("É bissexto\n");
	else
	  printf ("Não é Bissexto\n");  
	  
	  
	dIni = le_data();
    dFim = le_data();
	printf("Dias decorridos entre as datas: %d", diferencaEntreDatas(dIni,dFim));  
	
}
	
