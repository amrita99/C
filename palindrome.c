#include <stdio.h>

int main()
{  
   int n,rem,reverse=0,temp=0;
   printf("Enter a number");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       rem=n%10;
       reverse=(reverse*10)+rem;
       n=n/10;
   }
   printf("Reverse of %d is %d\n",temp,reverse);
   if(temp==reverse){
       printf("%d is a paliandrome",temp);
     
   }
   else{
       printf("%d is not a paliandrome \n",temp);
   }
   return 0;
}
