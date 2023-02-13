#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
  int n,fibo;
  n = input();
  fibo = find_fibo(n);
  output(n,fibo);
  return 0;
}

int input(){
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n){
  int i,a = 0,b = 1;
  int c;
  for(i=1;i<n;i++){
    c = a+b;
    a = b, b = c;
 }
  return c;
}
  

void output(int n,int fibo){
  printf("The fibonacci number is %d\n",fibo);
}