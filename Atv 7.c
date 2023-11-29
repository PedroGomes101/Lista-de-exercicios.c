#include <stdio.h>
void main()
{
    char v[26];
    char i;
    int cont=0;
  printf("Digite a palavra: ");
  scanf(" %s",&v[i]);
  
    for(i=0;v[i]!='\0'; i++)
    {
        
         if(v[i]=='a'){
             cont=cont-1;
         }
         if(v[i]=='e'){
             cont=cont-1;
         }
        if(v[i]=='i'){
             cont=cont-1;
         }
         if(v[i]=='o'){
             cont=cont-1;
         }
         if(v[i]=='u'){
             cont=cont-1;
         }
        cont++;
    }
         printf("%d\n",cont);
}