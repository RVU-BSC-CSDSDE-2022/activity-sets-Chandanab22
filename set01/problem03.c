#include <stdio.h>
sum_calc(int x,int y,int *sum);
  
int main(void){
  int a, b, sum;
  printf("enter the first numbre\n");
  scanf("%d", &a);
  printf("enter the second number\n");
  scanf("%d", &b);
  sum_calc(a,b, &sum);
  printf("sum is %d", sum);
}
  

sum_calc(int a, int b, int *sum)
{
  *sum=a+b;
}