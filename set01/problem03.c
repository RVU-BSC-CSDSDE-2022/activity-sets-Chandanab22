#include<stdio.h>
int sum_func(int a, int b, int sum);

int main(void)
{
int a,b,sum;
printf("enter the first number\n");
scanf("%d", &a);
printf("enter the second number\n");
scanf("%d", &b);
sum=sum_func(a,b,sum);
printf("%d", &sum);
return 0;
}

int sum_func(int a, int b, int sum)
{
sum=a+b;
return sum;
} 
