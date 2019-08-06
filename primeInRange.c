#include<stdio.h>
void main()
{
    int start, end,check;
    int j=0;
    scanf("%d %d",&start,&end);
    check = start + 1;
    while(check<end)
 {
     int flag = 1;
        for(int i = 2; i <= check/2; i++)
        {
            if(check % i == 0)
            {
                flag =0;
                break;
            }
        }
        
        if( flag )
        {
            if(j)
                printf(" ");
            printf("%d",check);
            j = 1;
        }
        
        check++;
    }
    
    return 0;
}
