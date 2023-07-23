/*Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.

------------------------------------------

For example,
Input:
Enter any number: 10

Output:
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>

divide(){
int k;
  printf("enter any number = ");
  scanf("%d",&k);

if(k%3==0 && k%5==0 ){
    printf("Given number is divisable by 5 and 3");

}else{
    printf("Given number is not divisible by 5 and 3");
}
}

void main (){
    divide();
}
