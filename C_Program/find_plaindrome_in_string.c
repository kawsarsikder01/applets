#include<stdio.h>
#include<string.h>

int main(){
char string[20];
int length , flag = 0;
printf("Enter a String : ");
// fgets(string,sizeof(string),stdin);
scanf("%s",&string);
length = strlen(string);
for (int i = 0; i < length; i++)
{
    if (string[i] != string[length-i-1])
    {
        flag =1;
        break;
    }
    
 
}
if (flag)
    {
      printf("%s is not a palindrome", string);
    }else{
        printf("%s is a palindrome", string);
    }

return 0;
}