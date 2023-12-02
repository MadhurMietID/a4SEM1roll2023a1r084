#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global user count variable
int userCount = 0;

// Structure for user details
typedef struct {
    char username[50];
    char password[50];
    float balance;
} User;

// Function prototypes
void mainMenu();
void createUserLogin();
void adminLogin();
void makeAccount();
void loginUser();
void deposit();
void withdraw();
void checkBalance();

int main() {
    // Infinite loop to display main menu until the application is closed
    while(1) {
        mainMenu();
    }

    return 0;
}

void mainMenu() {
    int choice;

    printf("1. Create User Login\n");
    printf("2. Admin Login\n");
    printf("3. Exit Application\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            createUserLogin();
            break;
        case 2:
            adminLogin();
            break;
        case 3:
            printf("Exiting the application...\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
    }
}

void createUserLogin() {
    char username[50];
    char password[50];
    float balance;
    if(userCount < 3) {
        printf("Enter username: ");
        scanf("%s",&username);

        printf("Enter password: ");
        scanf("%s", &password);

        printf("Enter balance: ");
        scanf("%f", &balance);

        // Add validation to check if the balance is at least 5k
        if(balance >= 5000) {
            userCount++;
            printf("User account created successfully.\n");
        } else {
            printf("Insufficient balance. The minimum balance required is 5k.\n");
        }
    } else {
        printf("The maximum number of users (3) has been reached.\n");
    }
}

void adminLogin() {
    // Implement the logic for admin login
}

void makeAccount() {
    // Implement the logic for making a new account
}

void loginUser() {
    // Implement the logic for user login
}

void deposit() {
    // Implement the logic for depositing money
}

void withdraw() {
    // Implement the logic for withdrawing money
}

void checkBalance() {
    // Implement the logic for checking the account balance
}