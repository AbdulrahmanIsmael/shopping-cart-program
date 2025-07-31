#include <stdio.h>
#include <string.h>

// Shopping Cart Program
int main(){    
    char item[50] = "";
    float price = 0.0f;
    char currency = '$';
    int quantity = 0;
    float total = 0.0f;
    char exit = '\0';

    printf("Welcome to the Shopping Cart Program\n\n");

    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0'; // Remove the newLine character

    printf("What is the price of %s in %c? ", item, currency);
    scanf("%f", &price);

    printf("How many %ss would you like to buy? ", item);
    scanf("%d", &quantity);

    total = price * quantity;
    printf("You have bought %d %s(s)\n", quantity, item);
    printf("The total price is: %c%.2f\n\n", currency, total);

    printf("Thank you for buying from us, see you soon!\n");

    return 0;
}