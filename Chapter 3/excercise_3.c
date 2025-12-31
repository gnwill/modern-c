#include <stdio.h>

int main(void){
    
    int x;
    int y;
    float i;

    scanf("%d", &x);
    scanf("%d", &y);
    printf(" %d, %d", x,y);
    printf(" %d -%d", x,y);

    scanf("%d%f%d", &y,&i,&x);
    printf("%d%f%d", y,i,x);

}
