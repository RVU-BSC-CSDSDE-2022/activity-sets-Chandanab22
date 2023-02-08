#include <stdio.h>
#include <math.h>
double input();
double square_root(double n);
void output(double n, double sqrroot);

int main() {
  double n = input();
  double sq = square_root(n);
  output(n,sq);
}

double input(){
  double a;
  printf("Enter a number");
  scanf("%lf",&a);
  return(a);
}

double square_root(double n){
   int x=n;
   int y=1;
  while (x > y) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}


void output(double n,double sqrroot){
  printf("square root of %2.2lf is %2.4lf",n,sqrroot);
}
