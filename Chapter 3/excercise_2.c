#include <stdio.h>

int main(void){
    
    float x;
    x = 1;

    int y;
    y = 2;

    printf("|%-8.1e|", x);
    printf("|%10.6e|", x);
    printf("|%-8.3d|", y);
    printf("|%6d|", y);

}
