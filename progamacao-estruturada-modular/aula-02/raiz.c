#include <stdio.h>

float minhaRaiz(float n)
{
    float chute = 0;
    float passo = 1;
    int i;

    for (i = 0; i < 6; i++)
    {

        while (chute * chute < n)
        {
            chute = chute + passo;
        }
        if (chute * chute > n)
        {
            chute = chute - passo;
        }

        passo = passo / 10;
    }
    return chute;
}

int main()
{
    int n;
    printf("qual o valor de n?");
    scanf("%d", &n);
    printf("A raiz de %d vale %f\n", n, minhaRaiz(n));
    return 0;
}