#include<stdio.h>

int main(){

int length , breadth;

printf("What is the length of the rectangle\n");
scanf("%d",&length);
printf("\nWhat is the  breadth of the rectangle\n ");
scanf("%d",&breadth);
int area = length*breadth;
printf("\nArea of the rectangel %d",area);

return 0;
}