#include <stdio.h>
#include<string.h> 
int main()
{
   int i,n,a[20],sum=0,val;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
       
   }
   val=sum/n;
   printf("%d", val);
    return 0;
}
