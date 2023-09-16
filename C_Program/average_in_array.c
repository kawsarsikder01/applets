#include<stdio.h>

int main(){
 int marks[10], i, n, sum = 0;
double average;
printf("Enter number of elements : ");
scanf("%d",&n);
for (i = 0 ; i < n ; ++i)
{
 printf("Enter number %d: ",i+1);
 scanf("%d", &marks[i]);
}
for (int j = 0; j < n ; ++j)
{
     sum += marks[j];
}
average = (double) sum/n;
printf("Average = %.2lf", average);




return 0;
}