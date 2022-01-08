/*
Fa�a uma fun��o que receba como par�metros a quantidade  de alunos da turma e a quantidade de alunos aprovados.
Esta fun��o dever� calcular e retornar o percentual de reprovados de uma turma.
*/

#include<stdio.h>

float calcPercentRep(int totalAlunos, int totalAprov)
{
    float percentRep;
    percentRep = (float)(totalAlunos - totalAprov)*100 / totalAlunos ;
    return percentRep;
}
// Programa criado para teste:
int main()
{
    int alunos = 15;
    int aprovados = 5;
    float resultado;
    resultado = calcPercentRep(alunos, aprovados);
    printf("Resuldado: %0.02f",resultado);
    return 0;
}
