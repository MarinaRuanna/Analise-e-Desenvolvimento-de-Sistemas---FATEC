#include <stdio.h>

// Dadas duas sequências com `n` números inteiros entre 0 e 9,
// interpretadas como dois números inteiros de n algarismos,
// calcular a sequência de números que representa a soma dos dois inteiros.
int main()
{
    int vet1[] = {3, 2, 1};
    int vet2[] = {8, 8, 8};
    int soma[4];
    int i, vaium = 0;

    printf("%d\n\n", sizeof(vet1) / sizeof(int));

    for (i = 0; i < 3; i++)
    {
        int s = vet1[i] + vet2[i] + vaium;
        soma[i] = s % 10;
        vaium = s / 10;
    }
    soma[3] = vaium;

    for (i = 3; i >= 0; i--)
    {
        prontf("%d", soma[i]);
    }

    return 0;
}