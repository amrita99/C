#include <stdio.h>

int main()
{
  char choice;
  int num1,num2,sum,mul,divi,sub;
  
  printf("+ for addition\n - for subtraction\n / for division\n * for multiplication\n Enter your choice: ");
  scanf("%c",&choice);
  printf("Enter two numbers");
  scanf("%d %d",&num1,&num2);
  switch(choice){
      case '+':
       sum = num1+num2;
       printf("num1 + num2: %d ",sum);
       break;
      case '-':
       sub = num1-num2;
       printf("num1-num2: %d ",sub);
       break;
      case '/':
       divi = num1/num2;
       printf("num1/num2 :%d ",divi);
       break;
      case '*':
       mul = num1*num2;
       printf("num1*num2 :%d ",mul);
       break;
      default:
       printf("invalid operator");
  
      
    }
      return 0;
}
      
  
  
