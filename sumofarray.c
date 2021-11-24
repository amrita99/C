#include <stdio.h>

int main()
{  
   int i,mark[100],average=0,sum=0;
   printf("Enter 5 marks");
   for(i=1;i<=5;i++)
   {
    scanf("%d",&mark[i]);
   }
   for(i=1;i<=5;i++){
    sum=sum+mark[i];
       
   }
    printf("total marks = %d\n",sum);
    average= sum/5;
    printf("\n average mark = %d",average);
    
   
  
   return 0;
}
