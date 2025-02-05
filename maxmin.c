#include<stdio.h>
int main(){
int limit,i,min,max;
printf("Enter the number of elements in the array");
scanf("%d",&limit);
int array[limit];
printf("Enter %d elements for the array",limit);
for(i=0;i<limit;i++){
 scanf("%d",&array[i]);
 }
for(i=0;i<limit;i++){
 max=array[0];
 min=array[0];
 if (array[i]>=max){
  max=array[i];
  }
 else if (array[i]<=min){
  min=array[i];
  }
 }
printf("the largest number in the array is %d ",max);
printf("the smallest number in the array is %d",min);
return 0;
}


