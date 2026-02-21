#include <stdio.h>

int main()
{
    int vet[] = {5, 2, 2, 3, 4, 4, 4, 4, 1, 1};
    int i, cont = 1, anterior = vet[0];

    for (i = 1; i < 10; i++)
    {
        if (vet[i] != anterior)
        {
            cont = cont + 1;
        }
        anterior = vet[i];
    }

    printf("há %d grupos!\n", cont);

    return 0;
}