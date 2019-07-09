#include <stdio.h>
int main()
{
    char alp;
    scanf("%c",&alp);
    if(alp>=65 && alp<=90 || alp>=97 && alp<=122)
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
}
