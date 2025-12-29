/* Name: polynomial.c
   Purpose: Simple multiplication of a polynomial
   Author: William Gonzalez <email: will@wgz.sh>
*/

# include <stdio.h>

int main (void){

    int x;
    
    printf("Please enter a value for x: ");
    scanf("%d", &x);

    int poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("%d", poly);

}
