#include<stdio.h>
int main()
{
    char a[100];
    int i,n;
    scanf("%s%d",a, &n);
    for(i=0;i<n;i++)
    {
        printf("%c", a[i]);
    }
   
}
