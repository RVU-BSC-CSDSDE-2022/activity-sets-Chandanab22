#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a,int b,int c,int largest);

int main(void){
int a,b,c,l;
a = input();
b = input();
c = input();
l = compare(a,b,c);
output(a,b,c,l);
  return 0;
}

int input(){
  int x;
  printf("enter a number\n");
 if(scanf("%d",&x)!=1);
  return(x);
  }
int compare(int a, int b , int c)
{
  if( a>=b && a>=c)     //using and operator
    return a;             
  if( b>=c )          
    return b;            
  return c;              
  }                      
                        
void output(int a, int b, int c, int largest){
  printf("the largest of %d,%d and %d is %d" ,a,b,c,largest);
}



  