#include <stdio.h>

int main (){

int x;
int y;
printf("What's the value of x? \n");
scanf("%i", &x);
printf("What's the value of y?\n");
scanf("%i", &y);

if (x < y)
{
printf("X is less than y\n");    
}
else if (x > y)
{
    printf("X is greater than Y\n");
}
else 
{
    printf("The value of x and y are equal");
}
    return 0;
}