#include<stdio.h>
#include<stdlib.h>

int main(){

    int n ,i ,*ptr,sum = 0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
     ptr=(int*)calloc(n,sizeof(int));
    if (ptr == NULL)
    {
       printf("Sorry! unable to allocate to memory");
       exit(0);
    }
    printf("Enter elements of array : ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",ptr+i);
        sum +=*(ptr+i);
    }
    printf("sum = %d",sum);
    
    


return 0;
}