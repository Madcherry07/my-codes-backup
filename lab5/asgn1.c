//Define 2D array and find maximum, minimum, and average of elements
#include<stdio.h>
int main()
{
int rows, columns;
int i,j,max,min;
float sum=0,avg;
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows,&columns);
int arr[rows][columns];
printf("Enter elements of the array:\n");
for(i=0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    scanf("%d", &arr[i][j]);
}
max = min = arr[0][0];
for(i=0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    {
        int val = arr[i][j];
        sum+=val;
        if(val>max)
        max = val;
        if(val<min)
        min = val;
    }
}
avg= (float)sum/(float)(rows*columns);
printf("\nMaximum elements: %d",max);
printf("\nMinimum elements: %d",min);
printf("\nAverage of all elements: %f",avg);

return 0;
}


