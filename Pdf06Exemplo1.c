/*Fa�a uma fun��o que receba como par�metros dois n�meros inteiros, calcule e retorne
a soma dos n�meros.
*/
int calculaSoma(int numero1, int numero2)
{
    int soma;
    soma = numero1 + numero2;
    return soma;
}
/*ERRADO
int calculaSoma(int numero1, numero2) //ERRADO. Tem que colocar tipo de cada par�metro
{
    int soma;
    soma = numero1 + numero2;
    return soma;
}
*/
/*ERRRADO
int calculaSoma(int numero1, int numero2, int soma) //soma n�o � par�metro
{
    soma = numero1 + numero2;
    return soma;
}
*/
/*ERRADO
int calculaSoma()
{
    int numero1, numero2, soma;
    soma = numero1 + numero2; //numero1 e numero2 t�m lixo
    return soma;
}
*/
