#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1; i<=5; i++)
    {
      int mul;
        mul = i * a;
        printf("%d ",mul);
    }
}
