// Name: switch.c
// Usage: simple c program using switch statement
// Author: William Gonzalez <email:will@wgz.sh>

#include <stdio.h>

int main(void){

    int x = 1;

    switch (x) {
        case 1: // this will evaluate to good
        case 5: // so will this
        case 9: printf("Good\n");
                break;
        case 10: printf("Amazing!\n");
                 break;
        default: printf("Please enter a number within bound!\n");
                 break;
    }
}
