/*Exercícios 08 – Algoritmos com repetição II
8.1.Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva um
algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo.
OBS: O algoritmo deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for
fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na construção da
repetição de validação.
[Entrada] [Saída]
10 (primeiro valor)
0 (segundo valor)
0 (segundo valor)
2 (segundo valor) 5
8.2.Altere a solução do exercício 8.1 para que seja impressa a mensagem Valor inválido caso o segundo
valor informado seja ZERO.
[Entrada] [Saída]
10 (primeiro valor)
0 (segundo valor) Valor inválido
0 (segundo valor) Valor inválido
2 (segundo valor) 5
8.3.Reescreva o algoritmo para o problema 8.1 utilizando a estrutura FAÇA/ENQUANTO na construção
da repetição de validação.
8.4.Altere a solução do exercício 8.3 para que seja impressa a mensagem Valor inválido caso o segundo
valor informado seja 0.
8.5.Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir a
média semestral. Faça com que o algoritmo só aceite notas válidas( uma nota válida deve pertencer ao
intervalo [0,10]. Cada nota deve ser validada separadamente. Deve ser impressa a mensagem "Nota
inválida" caso a nota informada não pertença ao intervalo [0,10].
[Entrada] [Saída]
-2 (nota 1) Nota inválida
11 (nota 1) Nota inválida
9 (nota 1)
12 (nota 2) Nota inválida
-3 (nota 2) Nota inválida
10 (nota 2) 9.5 (média)
8.6.Reescreva o algoritmo para o problema 8.5 para que no final seja impressa a mensagem Novo cálculo
(1.sim 2.não) solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não
executar o algoritmo novamente. Se for informado o código 1 deve ser repetida a execução de todo o
algoritmo para permitir um novo cálculo, caso contrário ele deve ser encerrado.
[Entrada] [Saída]
-2 (nota 1) Nota inválida
7 (nota 1)
9 (nota 2) 8 (média)
 Novo cálculo (1.sim 2.não)?
1
6 (nota 1)
12 (nota 2) Nota inválida
-3 (nota 2) Nota inválida
10 (nota 2) 8 (média)
 Novo cálculo (1.sim 2.não)?
2
8.7.Reescreva o algoritmo do exercício 8.6 validando a resposta do usuário para a pergunta Novo Cálculo
(1.sim 2.não)? (aceitar apenas os código 1 ou 2).
[Entrada] [Saída]
-2 (nota 1) Nota inválida
7 (nota 1)
9 (nota 2) 8 (média)
 Novo cálculo (1.sim 2.não)?
3
 Novo cálculo (1.sim 2.não)?
0
 Novo cálculo (1.sim 2.não)?
1
6 (nota 1)
12 (nota 2) Nota inválida
-3 (nota 2) Nota inválida
10 (nota 2) 8 (média)
 Novo cálculo (1.sim 2.não)?
2
8.8. Reescreva o algoritmo do exercício 7.4 (triângulo equilátero, isósceles e escaleno) para que após a
leitura dos dados ( a medida dos 3 lados do triângulo) seja impressa a mensagem Os dados informados
estão corretos (1.sim/2.não)? solicitando ao usuário uma resposta. Caso a resposta seja 1 a execução deve
continuar normalmente escrevendo o tipo de triângulo, caso contrário a leitura dos dados (a medida dos 3
lados) deverá ser repetida.
[Entrada] [Saída]
5 (lado 1)
7 (lado 2)
8 (lado 3)
 Os dados informados estão corretos (1.sim 2.não)?
2
8 (lado 1)
3 (lado 2)
8 (lado 3)
 Os dados informados estão corretos (1.sim 2.não)?
1
 Isósceles*/