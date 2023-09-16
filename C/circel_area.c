#include<stdio.h>
#include<math.h>

int main(){
int radius;
float pie = 3.1416;

printf("Enter Your Circle Radius: ");
scanf("%d",&radius);
float area =  pie*pow(radius,2);
printf("Circle Radius: %f",area);
return 0;
}