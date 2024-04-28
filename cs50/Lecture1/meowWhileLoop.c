#include <stdio.h>

int main (){

printf("What is your first name?\n");
char name[10];
scanf("%s", &name);
printf("what is your lucky number\n");
int luckyNumber;
scanf("%i", &luckyNumber);

while (luckyNumber > 0)
{
    printf("Hello %s\n", name);
    luckyNumber--;

}

    return 0;
}