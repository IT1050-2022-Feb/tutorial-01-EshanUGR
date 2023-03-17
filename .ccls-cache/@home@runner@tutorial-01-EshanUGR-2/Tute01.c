/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>//header file

int main() {//main function

  int num1,num2;
  float avg;

  
  printf("enter number one :");
  scanf("%d %d",&num1,&num2);//take user two inputs integer

  avg=(num1+num2)/2.0;//average

  printf("Average is %.2f",avg);//output
  

  
  
  return 0;
}

