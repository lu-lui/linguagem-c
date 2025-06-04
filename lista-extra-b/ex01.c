/*Exercícios 09 – Algoritmos com repetição III
9.1.Escreva um algoritmo para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após
escrever a mensagem "Calcular a média de outro aluno 1.Sim 2.Não?" e solicitar uma resposta. Se a
resposta for 1, o algoritmo deve ser executado novamente, caso contrário deve ser encerrado imprimindo
a quantidade de alunos aprovados.
[Entrada] [Saída]
8 (nota 1) 9 (nota 2) 8.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 4 (nota 2) 4.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 7 (nota 2) 6 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
3 (nota 1) 2 (nota 2) 2.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
8 (nota 1) 10 (nota 2) 9 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
2
 3 (quantidade de aprovados)
9.2.Reescreva o algoritmo do exercício 9.1, para que seja impressa no final, a quantidade de alunos
aprovados, reprovados ou que ficaram em exame.
[Entrada] [Saída]
8 (nota 1) 9 (nota 2) 8.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 4 (nota 2) 4.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 7 (nota 2) 6 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
3 (nota 1) 2 (nota 2) 2.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
8 (nota 1) 10 (nota 2) 9 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
2
 3 (quantidade de aprovados)
1 (quantidade de reprovados)
1 (quantidade de alunos em exame)
9.3.Reescreva o algoritmo do exercício 9.2, para que seja impresso no final, o percentual de alunos
aprovados, reprovados ou em exame em relação a quantidade total de alunos cujas notas foram
informadas.
[Entrada] [Saída]
8 (nota 1) 9 (nota 2) 8.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 4 (nota 2) 4.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
5 (nota 1) 7 (nota 2) 6 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
3 (nota 1) 2 (nota 2) 2.5 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
1
8 (nota 1) 10 (nota 2) 9 (média)
 Calcular a média de outro aluno (1.sim 2.não)?
2
 3 (quantidade de aprovados)
1 (quantidade de reprovados)
1 (quantidade de alunos em exame)
60 (percentual de aprovados)
20 (percentual de reprovados)
20 (percentual em exame)
9.4.Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é
o número 2009.
OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser
impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser
impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a
senha foi informada.
[Entrada] [Saída]
2200 ACESSO NEGADO
1020 ACESSO NEGADO
2022 ACESSO NEGADO
2009 ACESSO PERMITIDO
 4 (quantidade de vezes que a senha foi informada)
9.5.A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística
do resultado de vários GRENAIS. Escreva um algoritmo para ler o número de gols marcados pelo Inter, o
número de gols marcados pelo GRÊMIO em um GRENAL, imprimindo o nome do time vitorioso ou a
palavra EMPATE. Logo após escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma
resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols
marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
-Quantos GRENAIS fizeram parte da estatística.
-O número de vitórias do Inter.
-O número de vitórias do Grêmio.
-O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou NÃO HOUVE
VENCEDOR).
[Entrada] [Saída]
2 (gols Inter) 1 (gols Grêmio) Inter
 Novo GRENAL (1.sim 2.não)?
1
2 (gols Inter) 2 (gols Grêmio) EMPATE
 Novo GRENAL (1.sim 2.não)?
1
2 (gols Inter) 4 (gols Grêmio) Grêmio
 Novo GRENAL (1.sim 2.não)?
1
3 (gols Inter) 3 (gols Grêmio) EMPATE
 Novo GRENAL (1.sim 2.não)?
1
0 (gols Inter) 2 (gols Grêmio) Grêmio
 Novo GRENAL (1.sim 2.não)?
2
5 (quantidade de grenais)
1 (vitórias do Inter)
2 (vitórias do Grêmio)
2 (quantidade de empates)
Grêmio venceu mais grenais
9.6.Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool
2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser
solicitado um novo código (até que seja válido). Ao ser informado o código do combustível, o seu
respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o
número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que
abasteceram cada tipo de combustível.
[Entrada] [Saída]
1 Álcool
2 Gasolina
0
5
3 Diesel
2 Gasolina
1 Álcool
4 MUITO OBRIGADO
 2 (quantidade de Álcool)
 2 (quantidade de Gasolina)
 1 (Diesel)
9.7.Escreva um algoritmo para imprimir os números de 1 a 10 utilizando uma estrutura ENQUANTO e
um contador.
[Saída]
1 2 3 4 5 6 7 8 9 10
9.8.Escreva um algoritmo para imprimir os número de 1 a 10 utilizando uma estrutura
FAÇA/ENQUANTO e um contador.
[Saída]
1 2 3 4 5 6 7 8 9 10*/