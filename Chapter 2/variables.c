// * Name: variables.c
// * Simple program to declare and call variables
// * Author: William Gonzlez <email: will@wgz.sh>

# include <stdio.h>

int main (void) {
    int first;
    first = 1;

    float second;
    second = 2.0f;

    printf("First: %d\n", first);
    printf("Second: $%f\n", second); /* this displays 6 decimal digits*/
    printf("Second: $%.2f", second); /* this display 2 decimal digits*/

}