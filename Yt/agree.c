#include <stdio.h>

int main (){

char consent;
printf("Do you agree y/n:");
scanf("%c", &consent);

if (consent == 'y' || consent == 'Y'){
printf("agreed\n");

}

else if (consent == 'n' || consent == 'N')
{
printf("Not agreed\n" );
}
    return 0;

}

