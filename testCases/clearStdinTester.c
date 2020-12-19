#include"clearStdin.h"
#include<stdio.h>
int main()
{
int i;
char j;
for(i=0;i<10;i++)
{
printf("Enter a character : ");
scanf("%c",&j);
}
for(i=0;i<10;i++)
{
printf("Enter a character : ");
scanf("%c",&j);
clearStdin();
}
return 0;
}
