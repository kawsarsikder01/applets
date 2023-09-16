#include <stdio.h>
#include<string.h>

int main()
{
   char str[1000],ch ;
   int counter = 0;
    printf("Enter a character to find its frequency: ");
scanf("%c",&ch);
   printf("Enter String:");
  scanf("%s",str);
  int length =strlen(str);

  for(int i = 0; i < length; i++){
     if(ch == str[i]){
         counter++;
     }
  }
   printf("Frequency of %c = %d", ch, counter);
   

    return 0;
}
