//Take input of array, find min of the array and reverse the result using functions.
#include<stdio.h>
int findMin(int a[],int n)
{
    int min = a[0];
    for(int i=1; i<n; i++)
    {
        if (a[i]<min)
        min = a[i];
    }
    return min;
}
int reverseNumber(int n)
{
    int rev=0;
    while(n!=0)
    {
        int b = n%10;
        rev = rev*10 + b;
        n/=10;
    }
    return rev;
}
int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min= findMin(a,n);
    int rev= reverseNumber(min);
    printf("The smallest number is %d\n",min);
    printf("The reverse of the smallest number is %d\n",rev);
    return 0;
}