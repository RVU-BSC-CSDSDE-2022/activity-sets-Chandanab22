#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(){
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle(){
     Triangle t;
     printf("Enter the value of base\n");
     scanf("%f",&t.base);
     printf("Enter the value of altitude\n");
     scanf("%f",&t.altitude);
     return t;
}

void find_area(Triangle *t){
   t->area=0.5*t->base*t->altitude;
}

void output(Triangle t){
   printf("the area of triangle with base %2.1f and height %2.1f is %2.1f",t.base,t.altitude,t.area);
}