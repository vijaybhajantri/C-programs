#include<stdio.h>
main()
{
    int fact=1,n,i;
    
    printf("\nEnter any number:");
    scanf("%d",&n);
    
    if(n==0)
      printf("Factorial of %d = %d",n,fact);
    else
    {
      for(i=n; i>n; i--)
      {
          fact= fact*i;
      }
      printf("Factorial of %d is %d",n,fact);
    } 
}    
