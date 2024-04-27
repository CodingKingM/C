#include <stdio.h>

int main (){

char c;


printf("Do you agree y/n?");
scanf("%c", &c);

if ( c == 'y')
{
printf("Agreed\n");
}
else
{
    printf("Not agreed\n");
}
    return 0;
}