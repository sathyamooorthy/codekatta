#include <stdio.h>

void main()
{
    int i;
    printf("Enter the value of i");
    scanf("%d",&i);
    if (i==0)
    {
    printf("zero");
        }
    else if(i>=1)
    {
    printf("positive");
    }
    else
    {
        printf("negative");
    }
}
