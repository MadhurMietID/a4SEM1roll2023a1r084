/*use c to make a simple  atm application program. Make main menu with following options Create option for selection between user login and
admin login. Minimum of 3 users are allowed in user login option .Add option log in the  account in
with username and its password.If username does not exits this make a new account for the user. Minimum balance of account should be 5k.
Make options for deposit(with 10k limit),withdraw(10k limit),check balance and exit application*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 3
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20
#define MIN_BALANCE 5000
#define MAX_DEPOSIT 10000
#define MAX_WITHDRAWAL 10000

struct user
{
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int balance;
};

void create_user(struct user *users, int *num_users)
{
    if (*num_users == MAX_USERS)
    {
        printf("Maximum number of users reached.\n");
        return;
    }

    if (*num_users < 0 || *num_users >= MAX_USERS)
    {
        printf("Invalid number of users.\n");
        return;
    }

    struct user new_user;

    printf("Enter username: ");
    scanf("%s", new_user.username);

    printf("Enter password: ");
    scanf("%s", new_user.password);

    new_user.balance = MIN_BALANCE;

    users[*num_users] = new_user;

    (*num_users)++;
}

int user_exists(struct user *users, int num_users, char *username)
{
    for (int i = 0; i < num_users; i++)
    {
        if (strcmp(users[i].username, username) == 0)
        {
            return i;
        }
    }
    return -1;
}

int authenticate_user(struct user *users, int num_users, char *username, char *password)
{
    int user_index = user_exists(users, num_users, username);

    if (user_index == -1)
    {
        printf("User does not exist.\n");
        return 0;
    }

    if (strcmp(users[user_index].password, password) != 0)
    {
        printf("Incorrect password.\n");
        return 0;
    }

    return 1;
}

void display_main_menu()
{
    printf("Welcome to the ATM.\n");
    printf("1. User login\n");
    printf("2. Admin login\n");
    printf("3. Exit\n");
}

void user_login(struct user *users, int num_users)
{
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (!authenticate_user(users, num_users, username, password))
    {
        return;
    }

    display_user_menu(users, num_users, username);
}

void admin_login()
{
    // TODO: Implement this function
}

void display_user_menu(struct user *users, int num_users, char *username)
{
    printf("Welcome, %s.\n", username);
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check balance\n");
    printf("4. Exit\n");
}

void deposit(struct user *users, int num_users, char *username)
{
    int amount;

    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount <= 0 || amount > MAX_DEPOSIT)
    {
        printf("Invalid amount.\n");
        return;
    }

    int user_index = user_exists(users, num_users, username);

    if (user_index == -1)
    {
        printf("User does not exist.\n");
        return;
    }

    users[user_index].balance += amount;

    printf("Deposit successful.\n");
}

void withdraw(struct user *users, int num_users, char *username)
{
    int amount;

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= 0 || amount > MAX_WITHDRAWAL)
    {
        printf("Invalid amount.\n");
        return;
    }

    int user_index = user_exists(users, num_users, username);

    if (user_index == -1)
    {
        printf("User does not exist.\n");
        return;
    }

    if (users[user_index].balance < amount)
    {
        printf("Insufficient funds.\n");
    }
    else
    {
        users[user_index].balance -= amount;
        printf("Withdrawal successful.\n");
    }
}

int main()
{
    struct user users[MAX_USERS];
    int num_users = 0;

    int choice;

    while (1)
    {
        display_main_menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            user_login(users, num_users);
            break;
        case 2:
            admin_login();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}