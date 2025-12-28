/* Name: tax.c
   Purpose: Calculate tax
   Author: William Gonzalez <email: wgz.sh>
*/

# include <stdio.h>

int main (void){

    float amount;

    printf("Please enter an amount: ");
    scanf("%f", &amount);
    
    float add_tax = (amount * .05) + amount;

    printf("Amount is: %.2f\n", add_tax);

    return 0;
}

