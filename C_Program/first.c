#include<stdio.h>

int main(){
    float celcius;
    printf("Enter your celcius : ");
    scanf("%f",&celcius);
    float farenhite = (celcius * 9/5) + 32;
    printf("Farenhite : %f",farenhite);
return 0;
}
