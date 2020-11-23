/* Date:23-11=2020
   Author: Davik Chaudhary 
   Write a C program to print all even numbers between 1 to 100.*/
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
 return 0;
} 