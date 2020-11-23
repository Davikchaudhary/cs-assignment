/* Date:23-11=2020
   Author: Davik Chaudhary 
   Write a C program to find sum of all odd numbers between 1 to n.*/
   #include <stdio.h>

int main()
{
    int i, n;

    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}