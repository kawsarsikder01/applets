#include<stdio.h>
int addTowNumbers(int a ,int b);
int main(){
int n1,n2,sum;
printf("Enter Tow numbers :");
scanf("%d%d",&n1,&n2);
sum = addTowNumbers(n1,n2);
printf("sum = %d",sum);
return 0;
}
int addTowNumbers(int a , int b){
    int result;
    result = a+b;
    return result;
}