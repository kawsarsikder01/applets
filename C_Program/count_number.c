#include<stdio.h>

int main(){
int n ;
int count = 0;
printf("Enter a Number : \n");
scanf("%d",&n);
while (n!=0)
{
   n = n/10;
   count ++;
}
printf("\n The Number of digits in an  integer is :  %d",count);

return 0;
}