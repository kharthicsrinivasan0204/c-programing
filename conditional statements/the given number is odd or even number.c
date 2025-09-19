#include <stdio.h>

int main()

{
   int num1, num2;
   printf("Enter two numbers ");
   scanf("%d%d", &num1, &num2);
   if(num1%num2==0){
       printf("%d is even" ,num1, num2);
     }else if(num2%num1!=0){
        printf("%d is odd", num2,num1);
    }else{
    printf("Both number are  equal: %d \n",num1);
    }   
    
   
   

    return 0;
}