#include<stdio.h>

int main(){
int n,r,sum = 0,temp;
printf("Enter a number : ");
scanf("%d",&n);
temp = n;
while (n>0)
{
   r = n%10;
   sum = sum*10+r;
   n /= 10;
}
if(sum == temp){
    printf("Plaindrome Number");
}else{
    printf("not palindrome"); 
}
return 0;
}