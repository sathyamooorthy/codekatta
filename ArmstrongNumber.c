#include <stdio.h>
 
int main()
{
    int number, sum=0, rem=0,tempNumber;
 
  
    scanf("%d", &number);
 
    tempNumber=number;
 
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + (rem*rem*rem);
        tempNumber/=10;
    }  

    if(sum==number)  
        printf("yes");
    else
        printf("no");
 
    return 0;
}
