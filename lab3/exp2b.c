//Largest of three numbers using if else if (ladder) statement
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>=b && a>=c)
    printf("%d is the largest number.\n",a);
    else if(b>=c)
    printf("%d is the largest number.\n",b);
    else
    printf("%d is the largest number.\n",c);
    return 0;
}