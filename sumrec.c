/*
summation using recursive method
when first and last digit is unknown
it's means take input from user
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to calculate summation from 1 to n: ");
    scanf("%d",&n);
    printf("Summation of 1 to n: %d\n",sum(n));
    return 0;
}

int sum(n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}
