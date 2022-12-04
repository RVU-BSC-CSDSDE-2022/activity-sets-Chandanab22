#include<stdio.h>
void changa(int *x,int *y);
int main(void){
  int x,y;
  x=8,y=7;
  change(&x,&y);
  printf("x is %d y is %d",x,y);
  return 0;
}
void change(int *x,int *y)
{
  *x = 22;
  *y = 55;
}