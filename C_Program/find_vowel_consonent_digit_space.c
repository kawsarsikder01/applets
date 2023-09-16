#include<stdio.h>
#include<ctype.h>

int main(){
    char line[100];
    int vowel, consonent , digit , space ;
    vowel= consonent = digit = space = 0;
    printf("Enter a line of string: ");
    fgets(line,sizeof(line),stdin);
    for (int i = 0; line[i] != '\0'; i++) 
    {
        // conver to lowercase
        line[i] = tolower(line[i]);
       if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
       {
        vowel++;
       }
       else if (line[i] >= 'a' && line[i] <= 'z')
       {
        consonent++;
       }
       else if (line[i] >= '0' && line[i] <= '9')
       {
        digit++;
       }
       else if (line[i] == ' ')
       {
        space++;
       }
       
    }
     printf("Vowels: %d", vowel);
    printf("\nConsonants: %d", consonent);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    
return 0;
}
