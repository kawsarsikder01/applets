#include<stdio.h>

int main(){
int n ;
int sum = 0;
int m;
printf("Enter a number : ");
scanf("%d",&n);
while (n>0)
{
    m = n%10;
    sum = sum+m;
    n = n/10;
}
printf("\nSum is : %d",sum);

return 0;
}