#include <stdio.h>
int main()
{
int original,reverse=0,num,remainder;
scanf("%d",&num);
original=num;
while(num!=0)
{
	remainder = num %10;
	reverse = reverse *10 + remainder;
	num=num/10;
}
printf("%d",reverse);
}
