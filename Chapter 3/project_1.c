// * Name: project_1.c
// * Purpose: Simple project to format date
// * Author: William Gonzalez <email: will@wgz.sh>

#include <stdio.h>

int main(void){

    int dd;
    int mm;
    int yyyy;

    printf("Enter your date in mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("You entered the date %d%2.2d%d", yyyy, mm, dd);

    return 0;
}
