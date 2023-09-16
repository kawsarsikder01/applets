#include<stdio.h>

float large(float a,float b, float c)
{
    if (a > b && a > c)
    {
    return a;
    }else if (b > a && b > c)
    {
       return b;
    }else{
        return c;
    }
    
    
}
int main(){
float a,b,c,largest;
printf("Enter Three Numbers :");
scanf("%f %f %f",&a,&b,&c);
 largest = large(a, b, c);
  printf("Largest number = %.2f",largest);
return 0;
}