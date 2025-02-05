#include<stdio.h>
int main(){
int num,fact=1,i=1;
printf("Enter number whose factorial is to be known");
scanf("%d",&num);
while (i<=num){
  fact*=i;
  i++;
  }
  printf("the factorial of %d is %d",num,fact);
  return 0;
  }
