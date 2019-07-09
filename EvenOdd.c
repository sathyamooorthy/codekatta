#include <stdio.h>
void main()
{
    int i;
    scanf("%d",&i);
    if (i>=0)
    {
        if(i%2==0)
        {
        printf("Even");
        }
        else if(i%2==1)
        {
        printf("Odd");
        }
    }
    else
    {
        printf("invalid");
    }
  
    
}
