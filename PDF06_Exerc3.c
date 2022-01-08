/*
Faça uma função que receba como parâmetro o valor gasto de um cliente de um restaurante, calcule e retorne o valor a ser pago ao garçom.
O valor a ser pago ao garçom é de 10% do valor gasto.
*/
#include<stdio.h>

float calculaCaixinha(float gasto)
{
    float caixinha;
    caixinha = gasto * 0.1;
    return caixinha;
}

int main()
{
    float gastoCliente = 100.00;
    float resultado;
    resultado = calculaCaixinha(gastoCliente);
    printf("A caixinha foi de: %0.02f", resultado);
    return 0;
}
