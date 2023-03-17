/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>//header file

int main() {
  int dis;//distances decleare
  int amount;

  printf("enter distances :");
  scanf("%d",&dis);//take user input 
  
//using nested if else loops below
  if(dis<=30)
  {
    amount=dis*50;
  }

  else if(dis>30)
  {
    amount=30*50+(dis-30)*40;
  }

  printf("Total amount is :%d",amount);//output
  return 0;
}
