/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
int m1,m2,total;
  printf("Enter 1st sub mark: ");
  scanf("%d",&m1);
  printf("Enter2nd sub mark: ");
  scanf("%d",&m2);
  total=m1+m2;
  printf("average mark is:%.2f",total/2.0);
  return 0;
}

