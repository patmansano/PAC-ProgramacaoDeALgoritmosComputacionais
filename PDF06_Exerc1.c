/*
Fa�a uma fun��o que receba como par�metros o valor da hora e o valor dos minutos de um hor�rio.
Esta fun��o dever� converter o hor�rio para minutos e retorn�-lo.
*/
#include<stdio.h>
// somente a fun��o pedida (lembrar de n�o colocar nada a mais)
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

