/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1 , no2;
	float average;
	
	printf("Enter Number 1 and Number 2: ");
	scanf("%d %d" , &no1 , &no2);
	
	average = (float) (no1 + no2) / 2;
	
	printf("\n");
	printf("The Average is : %.2f\n" , average);
	
  return 0;
}

