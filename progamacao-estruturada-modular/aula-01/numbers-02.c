
#include <stdio.h>

int main()
{
    int n, i, soma;
    for (n = 1; n < 10000; n++)
    {
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                soma = soma + i;
            }
        }
        if (soma == n)
            printf("%d\n", n);
        soma = 0;
    }
    return 0;
}