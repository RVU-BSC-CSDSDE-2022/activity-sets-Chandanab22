#include<stdio.h>
typedef struct{
int num, den;
}Fraction ;
Fraction input_fraction();
int find_gdc(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);
int main(){
Fraction f1, f2, sum;
f1 = input_fraction();
f2 = input_fraction();
sum = add_fractions(f1,f2);
output(f1, f2, sum);
return 0;
}
Fraction input_fraction(){
Fraction f;
printf("Enter the numerator: ");
if(scanf("%d",&f.num));
printf("Enter the denominator: ");
if(scanf("%d", &f.den));
return f;
}
int find_gcd(int a, int b){
int gcd;
for(int i=1; i<=a && i<=b; ++i){
if(a%i == 0 && b%i==0){
gcd = i; }
}
return gcd;
}
Fraction add_fractions(Fraction f1, Fraction f2){
Fraction sum;
int lcm = (f1.den*f2.den) / find_gcd(f1.den, f2.den);
sum.num = (lcm/f1.den) * f1.num + (lcm/f2.den) * f2.num;
sum.den = lcm;
return sum;
}
void output(Fraction f1, Fraction f2, Fraction sum){
printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}