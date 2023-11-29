#include <stdio.h>
void main()
{
    int v[11];
    int i,maior,menor;
    int n=0,p=0;
    printf("Digite 11 números:\n");
   for(i=0;i<11;i++)
    {
        scanf("%i",&v[i]);
    }
    menor=v[0];
    maior=v[0];
    for ( i = 0; i <11; i++) {
        if (menor>v[i])
        {
            menor = v[i];
        } 
       if (maior<v[i]) {
            maior = v[i];
        }
    }
   printf("Menor e o Maior número do vetor:%i ,%i\n",menor,maior);
   for(i=0;i<11;i++)
   {
       if(v[i]<0)
       {
           n++;
       }
       if(v[i]>0)
       {
           p++;
       }
   }
   printf("Quantidade de números negativo e positivo:%i ,%i\n",n,p);
}

