#include <stdio.h>

int main()
{   
    int num1,num2,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("First num: %d",num1);
    printf("Second num: %d",num2);
    


    return 0;
}
