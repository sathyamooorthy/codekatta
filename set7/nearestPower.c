#include <stdio.h>
#include<math.h>

int main()
{
    int a,c,count=0 ;
    scanf("%d",&a);
    while(a>1)
    {
        a=a/2;
        count++;
    }
    c=pow(2,(count+1));
    printf("%d",c);

}
