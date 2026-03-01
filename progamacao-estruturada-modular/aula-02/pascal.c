#include <stdio.h>

int main()
{
    int n;
    printf("qual é o n? ");
    scanf("%d", &n);

    int mat[n][n], linha, coluna;

    for (linha = 0; linha < n; linha++)
    {
        for (coluna = 0; coluna <= linha; coluna++)
        {
            if (coluna == 0 || linha == coluna)
            {
                mat[linha][coluna] = 1;
            }
            else
            {
                mat[linha][coluna] = mat[linha - 1][coluna] + mat[linha - 1][coluna - 1];
            }
            printf("%d\t", mat[linha][coluna]);
        }
        printf("\n");
    }
}
