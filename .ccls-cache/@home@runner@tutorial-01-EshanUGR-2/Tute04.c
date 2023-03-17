/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>// header file 
int minimum(int x, int y); //funtion prototype
int maximum(int x, int y);//funtion prototype
int multiply(int x, int y);//funtion prototype


int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);//take user input

  
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);//take user input
  
   printf(" Minimum number  :%d \n", minimum(no1, no2));
                                     //called 
   printf("Maximum number   :%d \n", maximum(no1, no2));
                                      //called 
   printf(" Mulitply number :%d \n", multiply(no1, no2));
                                       //called 
  
   return 0;
}

int minimum(int x, int y)
{
  if(x>y)//using conditon
  {
    return y;
  }
    
  else  {
    return x;
  }
}
int maximum(int x, int y)
{

  if(x>y) //using conditon
  {
    return x;
  }
  else if ({
    return y;
  }
}

int multiply(int x, int y)
{
  return x*y;
}