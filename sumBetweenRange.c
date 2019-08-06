#include <stdio.h>

int main()
{
    int i, n, a[10], k, sum=0;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(i < k)
        sum = sum+a[i];
   }

   printf("%d ",sum);
   
    return 0;
}
