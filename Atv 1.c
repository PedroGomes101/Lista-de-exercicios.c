#include <stdio.h>

int main()
{
     int v[11], i, pos1, pos2, cont = 0;
    float m;
    printf("Insira 11 valores: \n");

    for (i = 0; i < 11; i++)
    {
        scanf(" %d", &v[i]);
    }

    printf("Digite 2 posições do vetor: \n");
    scanf(" %d", &pos1);
    scanf(" %d", &pos2);

    for (i = pos1; i <= pos2; i++)
    {
        m += v[i];
        cont++;
    }

    m /= cont;

    printf("A media entre as posições %d e %d é : %.2f", pos1, pos2, m);
}
