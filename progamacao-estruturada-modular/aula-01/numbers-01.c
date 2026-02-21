// Dizemos que um inteiro `n` é perfeito se for igual à soma de seus divisores positivos, excluindo ele mesmo.
// Por exemplo, 6 é um número perfeito, pois seus divisores positivos são 1, 2 e 3, e a soma desses divisores é igual a 6 (1 + 2 + 3 = 6).
// Escreva um programa em C que solicite ao usuário um número inteiro e verifique se ele é um número perfeito ou não.
// O programa deve imprimir uma mensagem indicando o resultado.

#include <stdio.h>

int main()
{
    int n, i, soma = 0;
    printf("entre com um número inteiro: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0) // i é divisor de n
        {
            soma = soma + i;
        }
    };

    if (soma == n)
        printf("Esse numero é perfeito!\n");
    else
        printf("Esse número não é perfeito\n");

    return 0;
}
