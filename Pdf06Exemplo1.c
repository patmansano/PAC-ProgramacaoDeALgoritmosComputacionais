/*Faça uma função que receba como parâmetros dois números inteiros, calcule e retorne
a soma dos números.
*/
int calculaSoma(int numero1, int numero2)
{
    int soma;
    soma = numero1 + numero2;
    return soma;
}
/*ERRADO
int calculaSoma(int numero1, numero2) //ERRADO. Tem que colocar tipo de cada parâmetro
{
    int soma;
    soma = numero1 + numero2;
    return soma;
}
*/
/*ERRRADO
int calculaSoma(int numero1, int numero2, int soma) //soma não é parâmetro
{
    soma = numero1 + numero2;
    return soma;
}
*/
/*ERRADO
int calculaSoma()
{
    int numero1, numero2, soma;
    soma = numero1 + numero2; //numero1 e numero2 têm lixo
    return soma;
}
*/
