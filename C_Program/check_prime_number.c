#include<stdio.h>
#include<math.h>
int checkPrimeNumber(int a);
int main(){
    int a ,flag;
    printf("Enter Positibe Integer Number : ");
    scanf("%d",&a);
    flag = checkPrimeNumber(a);
    if(flag == 1)
    {
        printf("%d is not a prime number",a);
    }else{
        printf("%d is a prime number",a);
    }
return 0;
}
int checkPrimeNumber(int a)
{
    int flag = 0, squareRoot;
    squareRoot = a/2;
    for (int i = 2; i <= squareRoot; i++)
    {
        if (a%i == 0)
        {
           flag =1;
           break;
        }
        
    }
    return flag;
    
}