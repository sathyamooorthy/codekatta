#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a>0)
    {
for(i=a;i<b-1;)
{
    i++;
    if(i%2==0)
    {
        printf("%d ",i);
    }
}
}
}
