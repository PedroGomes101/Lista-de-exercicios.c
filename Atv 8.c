#include <stdio.h>
void main()
{
    char v[7];
    char i;
    printf("Digitea a palavra:\n ");
    scanf("%s", &v[i]);
    for (i = 0;v[i]!='\0'; i++) {
        
        if(v[i]>='a' && v[i]<='z')
        {
            if(v[i]=='a'){
            v[i]-=32; //v[i]=v[i]-32;
         }
         if(v[i]=='e'){
            v[i]-=32; //v[i]=v[i]-32;
         }
        if(v[i]=='i'){
           v[i]-=32; //v[i]=v[i]-32;
         }
         if(v[i]=='o'){
            v[i]-=32; //v[i]=v[i]-32;
         }
         if(v[i]=='u'){
            v[i]-=32; //v[i]=v[i]-32;
         }
        }
    }
    printf("Mostrando:\n ");
    for (i = 0;v[i]!='\0'; i++)
    {
      printf("%c", v[i]);
      }
    printf("\n");

}