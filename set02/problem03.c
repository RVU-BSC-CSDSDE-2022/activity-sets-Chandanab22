#include<stdio.h>
#include<stdlib.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
int n,result;
n=input_number();
  if((n==0) || (n==1)){
  printf("%d in neither prime nor composite\n", n);
  exit(0);
    }
 result = is_composite(n);
 output(n,result);
}

int input_number(){
  int n;
  printf("Enter a number\n");
  scanf("%d", &n);
  return n;
}

int is_composite(int n){
  int i, count = 0;
  for(i=1;i<=n;i++)
    {
      if(n%i == 0)
        count = count+1;
    }
  return count;
}

void output(int n, int result){
  if(result==1)
    printf("% is not a composite number",n);
  else
    printf("%d is a composite number",n);
}
  