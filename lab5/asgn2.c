//Tranpose of matrix
#include<stdio.h>
int main()
{
int m,n,i,j;
printf("Enter number of rows: ");
scanf("%d",&m);
printf("Enter number of columns: ");
scanf("%d",&n);
int a[m][n], b[n][m];
printf("Enter elements of the matrix: \n");
for( i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
    scanf("%d", &a[i][j]);
}
}
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
    b[j][i]= a[i][j];
}
}
printf("\nOriginal matrix:(%d*%d): \n",m,n);
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("\nTranspose matrix(%d*%d): \n",n,m);
for(i=0; i<n; i++)

{
for (j=0; j<m; j++)
printf("%d\t", b[i][j]);
printf("\n");
}
return 0;
}