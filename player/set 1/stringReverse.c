    #include <stdio.h>
    #include <string.h>
     
    int main()
    {
       char a[100],b[100];
       int len,i,j, count=0;
       scanf("%s",a);
       while(a[count]!=0)
       {
           count++;
       }
       j=count-1;
       for(i=0;i<count;i++)
       {
           b[i]=a[j];
           j--;
       }
      printf("%s", b);
     
       return 0;
    }
