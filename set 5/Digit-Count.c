#include<stdio.h>    

int main()    
{
    int i,n, count= 0;
    scanf("%d", &n);
    while(n)
    {
        count++;
        n=n/10;
    }
    printf("%d",count);
    
}
