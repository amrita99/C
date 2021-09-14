# include <stdio.h>
int main()
{
   int number,i,j;
   printf("Enter a number");
   scanf("%d",&number);
   for(i=1; i<=number; i++){
       for(j=0; j<i; j++){
           printf("*");
           
           
       }
          printf("\n") ;
       }
       return 0;
   }
   

