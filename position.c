#include<stdio.h>
int main(){
int limit,i,item;
printf("Enter the number of elements in array");
scanf("%d",&limit);
int array[limit];
printf("Enter %d element",limit);
for(i=0;i<limit;i++){
 scanf("%d",&array[i]);
   }
 printf("Enter the element to search:");
 scanf("%d",&item);
for(i=0;i<limit;i++){
 if(item==array[i]){
  printf("The given element is found at the position:%d",i+1);
   } 
}
 return 0;
} 



