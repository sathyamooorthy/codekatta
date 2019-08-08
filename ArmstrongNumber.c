#include <stdio.h>
#include<math.h>
 
int main()
{
    int number, sum=0, rem=0,tempNumber,count=0,check;
 
  
    scanf("%d", &number);
 
    tempNumber=number;
    check=tempNumber;
    while(number !=0)
    {
        count++;
        number=number/10;
    }
    printf("%d\n", count);
 
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + pow(rem,count);
        tempNumber/=10;
    }  
   
   printf("%d\n",sum);
   printf("%d\n",check);

    if(sum==check)  
        printf("yes");
    else
        printf("no");
 
    return 0;
}
