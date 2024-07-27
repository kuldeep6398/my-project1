#include<stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter the number to print the factorial of that number\n");
    scanf("%d",&n);

    int f = factorial(n);

    printf("The factorial of %d is %d",n,f);
    return 0;
}
int factorial(int n)
{
    int i , f = 1;
    for(i = 1; i<=n; i++)
        f = f*i;
    return f;
}
