#include<stdio.h>
#include<stdlib.h>

int input_number();
int is_prime(int n);
void output(int n, int result);


int main(){
   int n,result;
   n = input_number();
   if((n == 0)||(n == 1)){
    printf("%d is neither prime nor composite\n", n);
    exit(0);
  }
   result = is_prime(n);
   output(n,result);
   return 0;
}

int input_number(){
  int n;
  printf("Enter the integer to check for prime number\n ");
  scanf("%d",&n);
  return n;
}

int is_prime(int n){
   int i,flag = 0;
   for(i=2;i<=n/2;i++){
     if(n%i == 0)
      flag = 1;
      break;
  }
  return(flag);
}

void output(int n,int result){
  if(result == 0)
    printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);
}