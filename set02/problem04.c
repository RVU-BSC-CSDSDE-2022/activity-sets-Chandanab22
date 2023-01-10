#include<stdio.h>
#include<stdlib.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
  int sum,a;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_number(n,a);
  output(sum);
}

int input_array_size(){
  int a;
  printf("%d", &a){
    printf("error");
    exit(0);
  }
  return a;
}

void input_array(int n, int a[n]){
  int i;
  printf("wnter the number\n");
  for(i=o; i<n; i++){
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, inta[n]);
int i, count = 0, sum = 0;
for(i=o;i<n;i++){
  if(count == 1)
    sum = sum+a[i];
}
return(sum);
}
void output("sum af alll the composite number is %d\n", sum);
}