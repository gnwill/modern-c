/* Name: small.c
   Purpose: Calculate smallest bills
   Author: William Gonzalez <email: wgz.sh>
*/

#include <stdio.h>

int main(void){
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int twenty = (amount / 20);
    printf("%d\n", twenty);

    int ten = (amount - twenty * 20) / 10;
    printf ("%d\n", ten);

    int five = ((amount - twenty * 20) - (ten * 10)) / 5;
    printf ("%d\n", five);

    int one = (amount - twenty * 20 - ten * 10 - five * 5);
    printf ("%d\n", one);
}
