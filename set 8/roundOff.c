#include <stdio.h>


int main()
{
    float b;
    
    scanf("%f",&b);

    if((b-(int)b)!=0)
    {
        b=b+1;
    }
    printf("%d",(int)b);
}
