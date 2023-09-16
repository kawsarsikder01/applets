#include<stdio.h>
#include<stdlib.h>

void main(){

    char str[100];
    int l = 0;
    printf("Input the string: ");
    fgets(str,sizeof(str),stdin);
    printf("The charecter of String are : ");
    while (str[l]!='\0')
    {
        printf("%c\t",str[l]);
        l++;
    }
    printf("\n");
    

}