
#include <stdio.h>


int main (){

char firstName[10];
char lastName[11];
printf("What is your First name?\n");
scanf("%s", &firstName);
printf("What is your last name?\n");
scanf("%s", &lastName);
printf("Hello %s %s!", firstName, lastName);



    return 0;
}