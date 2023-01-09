#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a,b,c,d;
  a =input_side();
  b =input_side();
  c =input_side();
  d =check_scalene(a,b,c);
  output(a,b,c,d);
}

int input_side(){
   int a;
   printf("Enter the value\n");
   scanf("%d",&a);
   return a;
}

int check_scalene(int a, int b, int c){
   if ((a!=b) && (b!=c) && (a!=c)){
      return(1);
   }
   else{
     return(0);
   }
}

void output(int a, int b, int c, int isscalene){
  if (isscalene==1){
   printf("The given triangle with sides %d,%d,%d is scalene\n",a,b,c);
  }
  else {
    printf("The triangle with sides %d, %d,%d  is not scalene\n",a,b,c);
  }
}