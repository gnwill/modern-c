// * Name: volume.c
// * Purpose: Computes the radius 
// * Author: William Gonzalez <email: will@wgz.sh>

# include <stdio.h>

int main (void){

    int radius;

    printf("Please enter the radius: ");
    scanf("%d", &radius);
    
    float volume = (4.0f / 3.0f) * (3.14 * radius * radius * radius);
    
    printf("%f", volume);
}
