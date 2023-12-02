/*use c to make a simple  atm application program. Make main menu with following options Create option for selection between user login and 
admin login. Minimum of 3 users are allowed in user login option .Add option to make a account in 
application interface with username and its password.Minimum balance of account should be 5k.
Make options for deposit(with 10k limit),withdraw(10k limit),check balance and exit application*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store user details
struct user {
    char username[20];
    char password[20];
    int balance;
};

// Function to create a new user
void create_user(struct user *users, int *num_users) {
    // Check if the maximum number of users has been reached
    if (*num_users == 3) {
        printf("Maximum number of users reached.\n");
        return;
    }

    // Get the user details from the user
    printf("Enter username: ");
    scanf(" %s ", users[*num_users].username);
    printf("Enter password: ");
    scanf(" %s ", users[*num_users].password);
    users[*num_users].balance = 5000;

    // Increment the number of users
    (*num_users)++;
}

// Function to check if a user exists
int user_exists(struct user *users, int num_users, char *username) {
    for (int i = 0; i < num_users; i++) {
        if (strcmp(users[i].username, username) == 0) {
            return i;
        }
    }

    return -1;
}

// Function to check if the username and password are correct
int authenticate_user(struct user *users, int num_users, char *username, char *password) {
    int user_index = user_exists(users, num_users, username);
    if (user_index == -1) {
        printf("User does not exist.\n");
        return 0;
    }

    if (strcmp(users[user_index].password, password) != 0) {
        printf("Incorrect password.\n");
        return 0;
    }

    return 1;
}

// Function to display the main menu
void display_main_menu() {
    printf("Welcome to the ATM.\n");
    printf("1. User login\n");
    printf("2. Admin login\n");
    printf("3. Exit\n");
}

// Function to handle the user login
void user_login(struct user *users, int num_users) {
    // Get the username and password from the user
    char username[20];
    char password[20];
    printf("Enter username: ");
    scanf(" %s ", username);
    printf("Enter password: ");
    scanf(" %s ", password);

    // Check if the username and password are correct
    if (!authenticate_user(users, num_users, username, password)) {
        return;
    }

    // Display the user menu
    display_user_menu(users, num_users, username);
}

// Function to handle the admin login
void admin_login() {
    // TODO: Implement this function
}

// Function to display the user menu
void display_user_menu(struct user *users, int num_users, char *username) {
    printf("Welcome, %s.\n", username);
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check balance\n");
    printf("4. Exit\n");
}

// Function to handle the deposit operation
void deposit(struct user *users, int num_users, char *username) {
    // Get the amount to deposit from the user
    int amount;
    printf("Enter amount to deposit: ");
    scanf(" %d ", &amount);

    // Check if the amount is valid
    if (amount <= 5000) 
    {
        printf("Invalid amount.\n");
        return;
    }

    // Update the user's balance
    users[user_exists(users, num_users, username)].balance += amount;

    // Display a success message
    printf("Deposit successful.\n");
}

// Function to handle the withdraw operation
void withdraw(struct user *users, int num_users, char *username) 
{
    // Get the amount to withdraw from the user
    int amount;
    printf("Enter amount to withdraw: ");
    scanf(" %d ", &amount);
    // Check if the amount is valid
    if (amount <= 5000) 
    {
        printf("Invalid amount.\n");
        return;
    }
    // Check if there are enough funds in the account for the withdrawal
    if (users[user_exists(users, num_users, username)].balance < amount)
    {
        printf("Insufficient funds.\n");
    }
    else
    {
        // Update the user's balance
        users[user_exists(users, num_users, username)].balance -= amount;
        // Display a success message
        printf("Withdrawal successful.\n");
    }
}

