#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int count=1;
    gets(a);
    for(int i=0; a[i] !=0;i++)
    {
        if(a[i] == ' ')
            count++;
        
    }
    printf("%d", count);
    return 0;
}
