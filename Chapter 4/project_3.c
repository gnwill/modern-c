// Name: project_3.c
// Usage: Reverse a three-digit number, no arithmetic
// Author: William Gonzalez <email:will@wgz.sh>

#include <stdio.h>

int main(void){
    
    int a;
    int b;
    int c;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("Reversed three-digit number: %d%d%d\n", c, b, a);

    return 0;
}

