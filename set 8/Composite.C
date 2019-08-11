#include <stdio.h>
 
int main()
{
    int i;
    int number;
    unsigned char flag=0;
 
    
    scanf("%d",&number);
 
    for(i=2; i<=(number/2); i++)
    {
        if(number%i ==0)
        {
            flag=1;
            break;
        }
    }
     
    if(flag==0)
        printf("yes");
    else
        printf("no");
 
    return 0;
}
