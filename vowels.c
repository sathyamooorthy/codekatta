#include <stdio.h>
int main()
{
    char alp;
    scanf("%c",&alp);
    if (alp=='a' ||alp == 'A' || alp == 'e' || alp == 'E' || alp=='i' ||alp == 'I' || alp == 'o' || alp == 'O' || alp == 'u' || alp == 'U' )
    {
    printf("Vowel");
    }
    else if(alp>=65 && alp<=90 || alp>=97 && alp<=122)
    {
        printf("Consonant");
    }
    else
    {
        printf("invalid");
    }
}
