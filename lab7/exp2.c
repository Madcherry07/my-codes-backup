//Power of a number x^n using recursion
#include<stdio.h>
int power(int a,int b);
int power(int a,int b)
{
    if(b==1)
    return a*1;
    else 
    return a*power(a,(b-1));
}
int main()
{
    int a,b;
    printf("Enter a number and power: ");
    scanf("%d %d", &a, &b);
    printf("Answer is: %d", power(a,b));
    return 0;
}