#include<stdio.h>
#include<math.h>

int main(){
    int x1,x2,y1,y2,dtn;
    printf("Enter The First Point Cordinates = ");
    scanf("%d%d",&x1,&y1);
    printf("Enter The Secound Point Cordinates = ");
     scanf("%d%d",&x2,&y2);
     int x = pow((x2-x1),2);
     int y = pow((y2-y1),2);
     dtn = sqrt(x+y1);
        printf("\nThe Distance Between Two Points = %d\n", dtn); 

    return 0;
}