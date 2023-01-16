#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int c);

int main(){
int a = input();
int b = input();
int gcd = find_gcd(a,b);
output(a,b,gcd);
  }
   int input(){
     int x;
     printf("enter the number\n");
     scanf("%d", &x);
     return x;
   }

  int find_gcd(int a, int b){
    int i, gcd;
    for(i=1; i<=a && i<=b; i++){
      if(a%i == 0 && b%i == 0)
        gcd = i;
    }
    return gcd;
      }

void output(int a, int b, int gcd){
  printf("G.C.D OF %d and %d is %d",a,b,gcd);
}