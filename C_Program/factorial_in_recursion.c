#include<stdio.h>
int factorial(int n);
int main(){
int n , result;
printf("Enter a Positive Number : ");
scanf("%d",&n);
result = factorial(n);
printf("%d factorial is = %d",n,result);

return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }else{
        return n * factorial(n-1);
    }
    
}