// Name: fallthrough.c
// Usage: simple switch program, no break
// Author: William Gonzalez <email:will@wgz.sh>

#include <stdio.h>

int main(void){
    
    int grade = 4;
    int num_passing = 10;
    int total_grades = 15;

    switch (grade) {  
        case 4: 
        case 3: 
        case 2: 
        case 1: num_passing++;  /* FALL THROUGH */  
        case 0: total_grades++;  
                break;  
            }
    printf("Grade is: %d\n", grade);
    printf("Total Grades: %d\n", total_grades);
    printf("Number Passing: %d\n", num_passing);

    return 0;
}
