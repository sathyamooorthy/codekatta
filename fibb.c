#include<stdio.h>    
int main()    
{    
 int n1=1,n2=1,n3,i,number;    
 scanf("%d",&number);    
 if(number > 1)
 {
      printf(" %d %d",n1, n2);
     for(i=2;i<number;++i)
     {    
           
      n3=n1+n2;    
      printf(" %d",n3);    
      n1=n2;    
      n2=n3;    
     }
 }
 else if(number == 1)
 {
     printf("1");
 }
  return 0;  
 }    
