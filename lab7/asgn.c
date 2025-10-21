//Power of number x^n using recursion, reduce number of recursion calls
#include<stdio.h>
double power(int x, int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return x;
    double half= power(x,n/2);
    if(n%2==0)
    return(half*half);
    else
    return(x*half*half);
}
int main()
{
    int x,n;
    printf("Enter a number and power: ");
    scanf("%d %d",&x, &n);
    double result= power(x,n);
    printf("Answer is: %.2lf\n",result);
    return 0;
}