#include <stdio.h>

int main() {
    int i, j;
    char p[50], copia;

    printf("Digite uma palavra: ");

    scanf("%s", p);

    for (i = 0; p[i] != '\0'; i++)
    {
        for (j = i + 1; p[j] != '\0'; j++)
        {
            if (p[i] > p[j] && p[j] != '\0')
            {
                copia = p[i];
                p[i] = p[j];
                p[j] = copia;
            }
        }
    }

    printf("%s", p);
    return 0;
}