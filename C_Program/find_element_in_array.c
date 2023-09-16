#include<stdio.h>

int main(){
int item,n;
printf("Enter number of elements of an array: ");
scanf("%d",&n);
int a[n];
printf("\nEnter elments :");
for(int i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter item to search : ");
scanf("%d",&item);
for (int i = 0; i < n; i++)
{
    if(item == a[i]){
        printf("\n%d found at location %d",item, i+1);
        break;
    }
    else{
        printf("Item does not exist");
        break;
    }
    if (i > n-1)
    printf("\nItem does not exist.");
}


return 0;
}