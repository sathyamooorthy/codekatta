 #include <stdio.h>
    #include <string.h>
     
    int main()
    {
     char a[100],b[]=".";
     scanf("%s",a);
     
     strcat(a,b);
     printf("%s",a);
       return 0;
    }
