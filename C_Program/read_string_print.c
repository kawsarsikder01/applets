#include<stdio.h>

int main(){
char name[30];
printf("Enter name : ");
fgets(name,sizeof(name),stdin); //read string
printf("Name : ");
puts(name); //displaying string;
return 0;
}