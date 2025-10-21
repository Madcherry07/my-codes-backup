//To define 1D array and find maximum, minimum, and average of elements
#include<stdio.h>
int main()
{
int n,i;
float sum=0,avg;
int max,min;
printf("Enter the number of elements of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements: \n",n);
for (i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
max =min =arr[0];
for (i=0; i<n; i++)
{
    sum+=arr[i];
    if (arr[i]>max)
    max=arr[i];
    if (arr[i]<min)
    min=arr[i];
}
avg=(float)sum/(float)n;
printf("\nThe largest element is %d",max);
printf("\nThe smallest element is %d",min);
printf("\nThe average of the elements is %f",avg);

return 0;
}