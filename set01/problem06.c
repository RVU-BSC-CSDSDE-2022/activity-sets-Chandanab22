#include <stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  compare(a,b,c,&l);
  output(a,b,c,l);
  
}
int input(){
  int x;
  printf("enter a number\n");
  if(scanf("%d",&x)!=1);
  return(x);
}

void compare(int a,int b,int c,int *largest){
  if(a>b)
  {
    if(a>c){*largest = a;}
    else{*largest = c;}
  }
  else
  {
    if(b>c){*largest = b;}
    else{*largest = c;}
  }
}
void output(int a, int b, int c, int largest){
  printf("the largets of %d,%d and %d is %d",a,b,c,largest);
}