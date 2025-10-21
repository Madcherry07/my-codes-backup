//Find index of an array using functions
#include<stdio.h>
int findIndex(int a[], int n, int x);
int main()
{
    int n,i,x;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d",&x);
    int b= findIndex(a,n,x);
    if(b==-1)
    printf("\nNumber not found!");
    else
    printf("\nThe index of number is %d",b);
    return 0;
}

int findIndex(int a[], int n, int x)
{
    int i,c;
    for(i=0; i<n; i++)
    {
        if (a[i]==x)
        {
            c=i;
            break;
        }
        else
        c=-1;
    }
    return c;
}