#include <stdio.h>

int main()
{
    int vet[] = {5, 2, 2, 3, 4, 4, 4, 4, 1, 1};
    int i, count = 1, len;

    // descobrimos a quantidade de itens no vetor
    // ao dividir a quantidade de bytes utilizados pelo valor de um inteiro que é o tipo utilizado no vetor
    len = sizeof(vet) / sizeof(int);

    for (i = 1; i < len; i++)
    {
        if (vet[i] != vet[i - 1])
            count = count + 1;
    }

    printf("há %d grupos!", count);

    return 0;
}
