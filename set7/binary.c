#include<stdio.h>
int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0; a[i] != 0; i++)
    {
        if((a[i] != '0') && (a[i] != '1'))
        {
            break;
        }
    }
    
    printf( (a[i] == 0 ) ? "yes":"no" );
    
}
