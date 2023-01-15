#include<stdio.h>

int input();
int find_gcd(int a, int b);
voiod output(int a, int b, int c);

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
     returm x;
   }

  int find_gcd(int a, int b){
    int i, gcd;
  }