// Name: example.c
// Usage: Playing with operators
// Author: William Gonzalez <will@wgz.sh>

#include <stdio.h>

int main(void){

    int a = 1;
    
    int b = 1;
    b += 2;
    
    int c = 5;
    c -= 3;
    
    int d = 2;
    d *= 4;
    
    int e = 12;
    e /= 6;
    
    int i = 13;
    int x = 100;

    printf("i is %d\n", ++i); // prints new value of i, i = 14
    printf("i is %d\n", i);   // i is now 14
    printf("\n");

    printf("x is %d\n", x++); // prints x before increment, x = 100
    printf("x is %d\n", x);   // prints x after increment, x = 101
    printf("\n");

    printf("i is %d\n", --i); // prints new value of i, i = 13
    printf("i is %d\n", i);   // i is now 13
    printf("\n");

    printf("x is %d\n", x--); // prints x before increment, x = 101
    printf("x is %d\n", x);   // prints x after increment, x = 100
    printf("\n");



    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    printf("d is %d\n", d);
    printf("e is %d\n", e);

    return 0;
}
