#include<stdio.h>
int main()
{
    int i,f=1,n;
    scanf("%d",&n);
    if(n<=20)
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("%d",f);
    }
}
