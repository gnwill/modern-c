// Name: project_1.c
// Usage: Reverse a number
// Author: William Gonzalez <email:will@wgz.sh>

#include <stdio.h>

int main(void){
    
    int n;

    printf("Enter a two-digt number: ");
    scanf("%d", &n);
    
    int reverse_first = n % 10; 
    int reverse_second = n / 10;

    printf("%d", reverse_first);
    printf("%d\n", reverse_second);

    return 0;
}
