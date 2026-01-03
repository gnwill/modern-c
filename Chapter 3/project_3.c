// * Name: project_3.c
// * Usage: A program that breaks down an ISBN.
// * Author: William Gonzlez <email: will@wgz.sh>

#include <stdio.h>

int main(void){

    int gs1_prefix;
    int group_identifier;
    int publisher_code;
    int item_number;
    int check_digt;

    printf("Enter ISBN (no dashes): ");
    scanf("%3d%1d%3d%5d%1d", &gs1_prefix, &group_identifier, &publisher_code,
    &item_number, &check_digt);

    printf("%3d-%1d-%3d-%5d-%1d", gs1_prefix, group_identifier, publisher_code,
    item_number, check_digt);

    return 0;

}

