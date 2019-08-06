#include <stdio.h>

int main()
{
    int start, end, check;
    int flag=0;
    scanf("%d%d",&start,&end);
    check= start + 1;
    while(check < end)
    {
        if(check % 2)
        {
            printf(" ");
            printf("%d",check);
            flag=1;
        }
        check++;
    }
}
