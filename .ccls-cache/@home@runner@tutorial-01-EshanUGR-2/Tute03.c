/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>//header file
int main() {

  int i,n,sum=0;//additon need therfore sum=0;
  printf("Enter number upto you need get sum :");
  scanf("%d",&n);//take user input

  for(i=1;i<=n;i++)
    {          
      
      sum+=i;
      //like below 
      //sum=sum+i;
      //sum=0+1;1
      //sum=1+2;2
      
    }

  printf("Sum is :%d",sum);//print  output
  return 0;
}

