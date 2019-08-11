#include <stdio.h>


int main()
{
    char str[20];
    int i;
    int flag=0;
    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            flag=1;            
        }
    }
    
    if (flag) {
        printf("yes");
    }    
    else {
        printf("no");
    }
    // return 0;
}
