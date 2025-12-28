// * Name: scanf.c
// * Usage: simple input program
// * Author: William Gonzalez <email: will@wgz.sh>

# include <stdio.h>

int main (void){
    int i;

    printf("Enter random input: ");
    scanf("%d", &i); /* reads an integer; stores into i */
    printf("%d", i);
}