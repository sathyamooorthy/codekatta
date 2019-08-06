#include <stdio.h>
#include<conio.h>
int main()
{
   int i, num, fact=1;
   
   scanf("%d", &num);
   for(i=num ; i>=1;i--)
   {fact=fact*i;
   }
   printf("%d",fact);
}
