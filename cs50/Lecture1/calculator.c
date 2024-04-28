#include <stdio.h>

int main(){

int x;
int y;
printf("What is the value of x?\n");
scanf("%i", &x);
printf("What is the value of y?\n");
scanf("%i", &y);
int sum = x+y;
//printf(" %i + %i = %i", x, y, sum);
printf(" = %i", x+y);
    return 0;
}