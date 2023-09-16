#include<stdio.h>

int main(){
int n;
printf("Enter The array size : ");
scanf("%d",&n);
double arr[n],max;
for ( int i = 0 ; i < n; ++i)
{
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
}
max = arr[0];
for (int i =0 ; i < n; ++i)
{
   if(arr[i] >max){
    max = arr[i];
   }
}
printf("Largest element = %.2lf", max);


return 0;
}