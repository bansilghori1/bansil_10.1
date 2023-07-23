/*Q.1 Write a Program to find the cube of a given number using UDF.For example,
Input:
Enter any number: 5

Output:
Cube is: 125
*/
#include<stdio.h>

  cube(){

  int i;
  printf("Enter any number = ");
  scanf("%d",&i);
  i=i*i*i;
   printf("The cube is %d",i);
  }
void main(){
  cube(); 
  }
