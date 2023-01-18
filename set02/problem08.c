#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangle(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n=input_n();
  Triangle t[n],smallest;
  input_n_triangle(n,t);
  find_n_areas(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}

int input_n(){
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return (a);
  
}

Triangle input_triangle(){
  Triangle t;
  printf("enter the base of the traingle\n");
  scanf("%f",&t.base);
  printf("Enter the altitude of the triangle\n");
  scanf("%f",&t.altitude);
  return (t);
}

void input_n_triangle(int n, Triangle t[n]){
   int i;
   for(i=0;i<n;i++){
   t[i] = input_triangle();
  }
}

void find_area(Triangle *t){
   t->area=0.5*t->base*t->altitude;
}

void find_n_areas(int n, Triangle t[n]){
     for(int i=0;i<n;i++)
       {
             find_area(&t[i]);
       }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
   Triangle smallest= t[0];
  for(int i=1;i<n;i++){
    if (t[i].area<smallest.area);
      smallest = t[i];
  }
  return (smallest);
}

void output(int n, Triangle t[n], Triangle smallest){
  printf("The smallest triangle out of triangles with base %f ",t->area);
}

