#include <stdio.h>

int main()
{
   int a,b,result,choice;
   printf("Enter two values");
   scanf("%d %d",&a,&b);
   printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch(choice){
       case 1:
            result=a+b;
            printf("%d + %d = %d",a,b,result);
            break;
               
       case 2: 
            result=a-b;
            printf("%d - %d = %d",a,b,result);
               break;
               
       case 3: 
            result=a*b;
            printf("%d * %d = %d",a,b,result);
            break;
       case 4: 
            result=a/b;
            printf("%d / %d = %d",a,b,result);
            break;
        default:
            printf("invalid operator");
             
   }    
   
   
   
   
   

    return 0;
}
