#include<stdio.h>

int main(){
int size;
printf("Enter the nth term upto which you want display the fibonacci sequence : ");
scanf("%d",&size);
int fibo[size];
fibo[0] = 0;
fibo[1] = 1;
for (int i = 2; i < size; i++)
{
    fibo[i] = fibo[i-1]+fibo[i-2];
}
printf("Displaying Fibonacci sequence: ");
for (int i = 0; i < size; i++)
{
   printf("%d\t",fibo[i]);
}


return 0;
}