// * Name: project_2.c
// * Purpose: Simple project to format product information.
// * Author: William Gonzalez <email: will@wgz.sh>

#include <stdio.h>

int main(void){

    int item_number;
    float unit_price;
    int day;
    int month;
    int year;


    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t%.2f\t%d/%d/%d", item_number, unit_price, month, day, year);

}
