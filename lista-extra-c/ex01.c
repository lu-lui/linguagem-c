/*Exercícios 11 – Algoritmos com repetição V
11.1 Ler 10 valores e escrever quantos destes valores são negativos.
[Entrada] [Saída]
3 -1 4 -5 -10 -21 3 6 45 2
 4 (quantidade de valores negativos)
11.2 Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo.
Escrever o resultado das duas contagens.
[Entrada] [Saída]
5 10 12 7 25 -1 0 13 60 2
 3 (dentro do intervalo)
7 (fora do intervalo)
11.3 Ler 10 valores, calcular e escrever a média aritmética destes valores.
[Entrada] [Saída]
10 3 12 5 25 0 13 60 70 2
 20 (média)
11.4 Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média
aritmética destas notas.
[Entrada] [Saída]
5 (número de alunos)
10 8.5 7.5 5 9 (notas dos alunos)
 8 (média)
11.5 Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e
escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).
[Entrada] [Saída]
3 (primeiro)
7 (segundo)
 25 (soma)
11.6 Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e viceversa.
[Entrada] | [Entrada]
3 (primeiro) | 7 (primeiro)
7 (segundo) | 3 (segundo)
 |
[Saída] | [Saída]
25 (soma) | 25 (soma)
11.7 Ler o número de alunos de uma turma. Ler as notas das 2 avaliações de cada aluno. Calcular e
escrever:
- O número de alunos aprovados.
- O número de alunos reprovados.
- O número de alunos em exame.
- A média aritmética das notas finais dos alunos aprovados.
- O percentual de alunos reprovados em relação ao total de alunos da turma.
[Entrada] [Saída]
8 (número de alunos)
6 (nota 1) 8 (nota 2)
5 (nota 1) 4 (nota 2)
2 (nota 1) 3 (nota 2)
8 (nota 1) 8 (nota 2)
9 (nota 1) 9 (nota 2)
7 (nota 1) 2 (nota 2)
5 (nota 1) 5 (nota 2)
1 (nota 1) 2 (nota 2)
 3 (aprovados)
2 (reprovados)
3 (em exame)
8 (média dos aprovados)
25 (percentual de reprovados)
11.8 Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1
(1,2,3,4,...) para que a sua soma ultrapasse a 100 o mínimo possível.
[Saída]
14
11.9 Ler um valor A e um valor N. Imprimir a soma dos N números a partir de A(inclusive). Caso N seja
negativo ou ZERO, deverá ser lido um novo N(apenas N).
Valores para teste:
A   N   SOMA
3   2     7     (3+4)
4   5     30    (4+5+6+7+8)
[Entrada] | [Entrada] | [Entrada]
3 (A) | 4 (A) | 10 (A)
-1 (N) | 5 (N) | 3 (N)
0 (N) | |
2 (N) | |
 | |
[Saída] | [Saída] | [Saída]
7 | 30 | 33
11.10 Ler um valor X e um valor Z (se Z for menor que X deve ser lido um novo valor para Z). Contar
quantos números inteiros devemos somar em sequência ( a partir do X inclusive) para que a soma
ultrapasse a Z o mínimo possível. Escrever o valor final da contagem.
Ex:
X     Z    Resposta
3     20      5       (3+4+5+6+7=25)
2     10      4       (2+3+4+5=14)
30    40      2       (30+31=61)
[Entrada] | [Entrada] | [Entrada] | [Entrada]
3 (X) 2 (Z) | 2 (X) 10 (Z) | 30 (X) 40 (Z) | 7 (X) 7 (Z)
 -1 (Z) | | |
 20 (Z) | | |
 | | |
[Saída] | [Saída] | [Saída] | [Saída]
5 | 4 | 2 | 1
11.11 A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa
sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo
que mostre os 20 primeiros números dessa série.
[Saída]
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
11.12 Ler um valor (só deve aceitar valores positivos), calcular e escrever seu respectivo fatorial.
OBS: O fatorial de 0 é igual a 1.
Fatorial de n = n *(n-1)*(n-2)*(n-3)*...*1
Ex: Fatorial de 4 = 4*3*2*1 = 24
[Entrada] | [Entrada] | [Entrada] | [Entrada]
-1 | 3 | 5 | 4
0 | | |
 | | |
[Saída] | [Saída] | [Saída] | [Saída]
1 | 6 | 120 | 24*/