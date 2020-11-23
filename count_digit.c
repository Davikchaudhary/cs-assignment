/* Date:23-11=2020
   Author: Davik Chaudhary 
   Write a C program to count number of digits in a number.*/
#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0)
    {
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}