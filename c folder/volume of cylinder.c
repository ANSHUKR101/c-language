#include<stdio.h>
int main()
{
    int r,h;
    printf("Enter the radius of cylinder\n");
    scanf("%d",&r);
    printf("Enter the height of cylinder\n");
    scanf("%d",&h);
    printf("volume of the cylinder is\n%.2f",3.14*r*r*h);
    return 0;
}