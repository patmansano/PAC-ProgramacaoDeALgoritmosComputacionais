/*
Faça uma função que receba como parâmetros o valor da hora e o valor dos minutos de um horário.
Esta função deverá converter o horário para minutos e retorná-lo.
*/
#include<stdio.h>
// somente a função pedida (lembrar de não colocar nada a mais)
int converteMinuto(int hora, int minutos)
{
int totalMinutos;
totalMinutos = hora * 60 + minutos;
return totalMinutos;
}
// chamada do programa, somente para teste.
int main ()
{
    int resultado;
    int horaProg = 2;
    int minutoProg = 15;
    resultado = converteMinuto(horaProg, minutoProg);
    printf("O resultado: %d", resultado);
    return 0;
}

