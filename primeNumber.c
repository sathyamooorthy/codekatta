#include <stdio.h>
 
int main()
{
    int tally;
    int number;
    unsigned char flag=0;
 
    
    scanf("%d",&number);
 
    for(tally=2; tally<=(number/2); tally++)
    {
        if(number%tally ==0)
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
