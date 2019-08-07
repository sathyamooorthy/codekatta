#include<stdio.h>
int main()
{
    int num, i,sum=0;
    scanf("%d",&num);
    if(num !=0)
    {
        i=num%10;
        sum=10-i;
        sum=sum+num;
    }
    else
    {
        num = sum+ 10;
    }
    printf("%d",sum);
}
