#include <stdio.h>
int main()
{
int original,reverse=0,num,rem,a=0;
scanf("%d",&num);
original=num;
while(num!=0)
{
	rem = num %10;
	a=(rem*rem)+a;
	num=num/10;
}

    printf("%d",a);
    
}
