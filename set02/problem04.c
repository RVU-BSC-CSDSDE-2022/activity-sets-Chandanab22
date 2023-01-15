#include<stdio.h>
#include<stdlib.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
  int sum,n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_number(n,a);
  output(sum);
}

int input_array_size(){
  int a;
  printf("Enter the size of array\n");
  if (scanf("%d", &a)!=1){
  printf("Error");
    exit(0);
  }
  return a;
}

void input_array(int n, int a[n]){
  int i;
  printf("Enter the number\n");
    for(i=1; i<n; i++){
    scanf("%d", &a[i]);
  }
}
int is_composite(int x){
  int count=0;
  for(int i = 1;i<=x;i++){
    if(x%i == 0){
      count++;
      if(count == 3){
        return(1);
        }
      }
    }
  return(0);
  }

int sum_composite_numbers(int n, int a[n]){
int i, count = 0, sum = 0;
for(i=0;i<=n;i++){
  count = is_composite(a[i]);
  if(count == 1)
    sum = sum+a[i];
}
return(sum);
}
void output(int sum){
printf("sum af all the composite number is %d\n", sum);
}




