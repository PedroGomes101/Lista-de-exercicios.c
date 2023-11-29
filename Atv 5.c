#include <stdio.h>
void main()
{ 
    int i,v[11],x=0;
    printf("Digite 11 números :\n");
    for(i=0; i<11; i++)
    {
      scanf("%d",&v[i]);
    }
    printf("Os 11 números :\n");
    for(i=0;i<11;i++) 
    {
        if(v[i]%2==0) {
        
        printf("%i\n",v[i-1]);
        }
        else
        {
             printf("%i\n",v[i]);
        }
    } 
    printf("\n");
}