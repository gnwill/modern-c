// Name: project_1.c
// Usage: Reverse a three-digit number
// Author: William Gonzalez <email:will@wgz.sh>

#include <stdio.h>

int main(void){
    
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    
    int reverse_first = n % 10; 
    int reverse_second = n / 10;
    int reverse_third_1 = reverse_second % 10;
    int reverse_third_2 = reverse_second / 10;

    printf("%d", reverse_first);
    printf("%d", reverse_third_1);
    printf("%d", reverse_third_2);
    

    return 0;
}
