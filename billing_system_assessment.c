#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0.0;
    float price, amount;
    char moreOrders;
    
    const float pizzaPrice = 180.0;
    const float burgerPrice = 100.0;
    const float dosaPrice = 120.0;
    const float idliPrice = 50.0;
    
    printf("Welcome to the Food Billing System\n");
    printf("-----------------------------------\n");

    while (1) {
        
        printf("\nMenu:\n");
        printf("1. Pizza - ?180/pcs\n");
        printf("2. Burger - ?100/pcs\n");
        printf("3. Dosa - ?120/pcs\n");
        printf("4. Idli - ?50/pcs\n");
        printf("Please Enter your choice (1-4): ");
        
        scanf("%d", &choice);
        
        if (choice == 1) {
            price = pizzaPrice;
            printf("You have selected Pizza.\n");
        }
        else if (choice == 2) {
            price = burgerPrice;
            printf("You have selected Burger.\n");
        }
        else if (choice == 3) {
            price = dosaPrice;
            printf("You have selected Dosa.\n");
        }
        else if (choice == 4) {
            price = idliPrice;
            printf("You have selected Idli.\n");
        }
        else {
            printf("Invalid choice. Please enter a valid option (1-4).\n");
            continue;
        }
        
        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        
        amount = price * quantity;
        total += amount;
        
        printf("Amount: ?%.2f\n", amount);
        printf("Total Amount is = ?%.2f\n", total);
        
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);  
        
        if (moreOrders == 'n' || moreOrders == 'N') {
            break;
        }
    }

    
    printf("\nFinal Total Bill: ?%.2f\n", total);
    printf("Thank you for ordering! Have a nice day.\n");

    return 0;
}
