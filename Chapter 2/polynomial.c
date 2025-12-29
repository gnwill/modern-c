/* Name: polynomial.c
   Purpose: Simple multiplication of a polynomial
   Author: William Gonzalez <email: will@wgz.sh>
*/

# include <stdio.h>

int main (void){

    int x;
    
    printf("Please enter a value for x: ");
    scanf("%d", &x);

    int poly = (3 * ( x * x * x * x * x)) + (2 * (x * x * x * x))
    - (5 * (x * x * x)) - (x * x) + (7 * x) - (6);

    printf("%d", poly);

}
