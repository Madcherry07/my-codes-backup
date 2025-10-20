#include<stdio.h>
int main()
{
int a;
printf("Enter the value of integer=\n");
scanf("%d",&a);
printf("you entered= %d\n",a);
printf("size of integer= %zu\n",sizeof a);

unsigned short int b;
printf("Enter the value of unsigned short integer=\n");
scanf("%d",b);
printf("you entered= %d\n",b);
printf("%zu\n",sizeof b);
return 0;
}