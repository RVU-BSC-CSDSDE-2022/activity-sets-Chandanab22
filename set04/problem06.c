#include<stdio.h>
#include<string.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
char string[100];
int no_words;
input_string(string);
no_words = count_words(string);
output(string, no_words);
return 0;
}
void input_string(char *a){
printf("Enter the string: ");
if(fgets(a, 100, stdin));
if(a[strlen(a) -1] == '\n'){
a[strlen(a)-1] = '\0';}
}
int count_words(char *string){
int i =0;
char *token = strtok(string, " ");
while(token != NULL){
i++;
token = strtok(NULL, " ");
}
return i;
}
void output(char *string, int no_words){
printf("the number of words in %s, is %d words.\n", string, no_words);
}