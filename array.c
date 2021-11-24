#include <stdio.h>

int main()
{  
   int i,mark[100];
   printf("Enter 5 marks");
   for(i=1;i<=5;i++)
   {
    scanf("%d",&mark[i]);
   }
   for(i=1;i<=5;i++){
    printf("%d ",mark[i]);
   }
  
   return 0;
}
