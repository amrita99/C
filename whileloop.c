#include <stdio.h>

int main()
{  
   int limit,i,sum=0;
   printf("Enter the limit: ");
   scanf("%d",&limit);
   i=1;
   while(i<=limit)
   {    sum=sum+i;
        i=i+1;
       
        
    
       
   }
    printf(" The sum of first %d numbers =%d",limit,sum);
   
       
   

    return 0;
}
