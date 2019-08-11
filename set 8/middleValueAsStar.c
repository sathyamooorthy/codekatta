/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int len,b;
    scanf("%s",a);
    len=strlen(a);
    b=len/2;
   
    if(len%2==1)
    {
        a[b]='*';
        printf("%s",a);
    }
    else
    {
        a[b]='*';
        a[b-1]='*';
        printf("%s",a);
    }
    return 0;
}
