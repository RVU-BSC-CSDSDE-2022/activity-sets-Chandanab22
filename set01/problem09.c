#include <stdio.h>
#include <math.h>
int void(main){
float input();
float square_root(float n);
void output(float n, float sqrroot);

 float findSQRT(int number)
{
    int start = 0, end = number;
    int mid; 
}
float ans;
while (start <= end) {
  mid = (start + end) / 2;
  if (mid * mid == number) {
            ans = mid;
            break;
        }
   if (mid * mid < number) {
      ans=start;
     start = mid + 1;
     }
  }
    float increment = 0.1;
    for (int i = 0; i < 5; i++); {
        while (ans * ans <= number); {
            ans += increment;
        }
    ans = ans - increment;
    increment = increment / 10;
    }
    return ans;
} 
int main()
{
    int N = 12;
    printf("%f ", findSQRT(N));
    return 0;
}