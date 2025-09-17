#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of celsius\n");
    scanf("%f",&c);
    printf("the value of farenheit is\n%.2f",(9.0/5.0)*c+32);
    return 0;
}