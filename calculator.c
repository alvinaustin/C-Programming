#include<stdio.h>
 int main(){
 int num1,num2,operand,sum,sub,mul,div,mod;
 printf("choose your operation:\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.remainder");
 scanf("%d",&operand);
 printf("Enter 2 integers");
 scanf("%d%d",&num1,&num2);
 sum=num1+num2;
 sub=num1-num2;
 mul=num1*num2;
 div=num1/num2;
 mod=num1%num2;
 switch(operand){
  case 1:printf("the sum is %d",sum);
       break;
  case 2:printf("the difference is %d",sub);
       break;
  case 3:printf("the product is %d",mul);
       break;
  case 4:printf("the division gives %d",div);
       break;
  case 5:printf("the remainder gives %d",mod);
       break;
       
  return 0;
}















}
