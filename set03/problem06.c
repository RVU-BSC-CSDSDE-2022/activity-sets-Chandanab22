#include<stdio.h>
#include<string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main(){
  char a[100],b[100];
  int index = 0;
  input_string(a,b);
  printf("a is %s\n",a);
  printf("b is %s\n",b);
  index=sub_str_index(a,b);
  output(a,b,index);
  return 0;
}

void input_string(char* a, char* b){
    printf("Enter the string\n");
    scanf("%[^\n]%*c",a);
    printf("Enter the substring\n");
    scanf("%[^\n]%*c",b);
}

int sub_str_index(char* string, char* substring){
  char i=0,j=0;
  while(string[i]!='\0')
  {
    if(string[i+j]==substring[j])
    {
      j++;
      if(substring[j]=='\0')
      {
        return i;
      }
    }
    else{
      i++;
      j = 0;
    }
  }
}

void output(char *string, char *substring, int index){
  printf("The index of %s in %s is %d",substring,string,index);
}
