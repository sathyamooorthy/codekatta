#include <stdio.h>

int main()
{
   int a[20],b[20], i, j, sum=0, n;
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
  
 for(i=1;i<=n;i++)
  {
     b[i]=a[i];
 }

   
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        if(a[i]>b[j])
        {
        sum=sum+b[j];
        
        }
        else
        {
            continue;
        }
    }
}
printf("%d",sum);
}
