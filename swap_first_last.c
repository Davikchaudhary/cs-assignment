/* Date:23-11=2020
   Author: Davik Chaudhary 
   Write a C program to swap first and last digits of a number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    digits = (int)log10(num);

    firstDigit = (int)(num / pow(10, digits));

    swappedNum = lastDigit;
    swappedNum *= (int)pow(10, digits);
    swappedNum += num % ((int)pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d", num);
    printf("\n Number after swapping first and last digit: %d", swappedNum);

    return 0;
}