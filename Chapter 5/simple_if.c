// Name: simple_if.c
// Usage: simple if statement
// Author: William Gonzalez <email: will@wgz.sh>

#include <stdio.h>
int main(void){

    int x = 10;
    int y = 2;

    if (x > y)
        printf("x is greater than y");
    else
        printf("y is greater than x");

    return 0;
}
