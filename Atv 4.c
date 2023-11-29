#include <stdio.h>

int main()
{
    int v[11], i, j, copia = 0, tamanho = 11;
    printf("Insira 11 valores: \n");

    for (i = 0; i < 11; i++)
    {
        scanf(" %d", &v[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (v[i] < v[j])
            {
                copia = v[i];
                v[i] = v[j];
                v[j] = copia;
            }
        }
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("%d - ", v[i]);
    }


    return 0;
}