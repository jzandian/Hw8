//Jasmine Zandian
//Fowler
//CISP 360
//6 April 2015
//Hw #8
#include <stdio.h>

int main(void)
{
  int numberConversion[50];
  int number;
  int num1;
  int base, count=0;
  printf("Enter an integer or press q to quit: ");
  while (scanf("%d", &number)==1)
   {
	printf("Now enter a number between 2-10. The original number you picked will be coverted to this base.\n");
	scanf("%d", &base);
	num1=number;
	while (number != 0)
   {
	 numberConversion[count] = number % base;
	 number = number / base;
	 ++count;
   }

  
   count=count-1;
printf("The number %d in base %d is ", num1,base);
   for (count ;count>=0; count--)
   {
	 printf("%d",numberConversion[count]);
   }
   printf("\nEnter an integer or press q to quit:");
	count=0;}
}
