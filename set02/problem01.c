#include<stdio.h>
  void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

  int main(){
  float base, height, area;
  input(base, height);
  return 0;
  }
  void input(float base, float height){
    float area;
  printf("enter base and height:");
  scanf("&f &f", &base, &height);
  float_area(base,height,&area);
  output(base,height,area);
  }

  void find_area(float base , float height, float *area){
    *area=0.5*base*height;
  }
  
void output(float base, float height, float area){
printf("the area of a triangle with base %2.1f and height %2.1f is %2.1f",base,height,area);
  }

  
  
  


  
  



 


