#include <stdio.h>
#include <string.h>

struct User {
    char username[20];
    char password[20];
    float balance;
};

struct User users[3];
int userCount = 0;

void createUser() {
    if (userCount >= 3) {
        printf("Maximum number of users reached.\n");
        return;
    }

    struct User newUser;

    printf("Enter username: ");
    scanf("%s", newUser.username);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, newUser.username) == 0) {
            printf("Username already exists.\n");
            return;
        }
    }

    printf("Enter password: ");
    scanf("%s", newUser.password);

    newUser.balance = 5000;

    users[userCount] = newUser;
    userCount++;

    printf("User created successfully.\n");
}

void userLogin() {
    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful.\n");
            return;
        }
    }

    printf("Invalid username or password.\n");
}

void showBalance() {
    char username[20];

    printf("Enter username: ");
    scanf("%s", username);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Balance: %.2f\n", users[i].balance);
            return;
        }
    }

    printf("Invalid username.\n");
}

void deposit() {
    char username[20];
    float amount;

    printf("Enter username: ");
    scanf("%s", username);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 10000) {
                printf("Deposit limit exceeded.\n");
                return;
            }

            users[i].balance += amount;

            printf("Deposit successful.\n");
            return;
        }
    }

    printf("Invalid username.\n");
}

void withdraw() {
    char username[20];
    float amount;

    printf("Enter username: ");
    scanf("%s", username);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > 10000) {
                printf("Withdrawal limit exceeded.\n");
                return;
            }

            if (amount > users[i].balance) {
                printf("Insufficient balance.\n");
                return;
            }

            users[i].balance -= amount;

            printf("Withdrawal successful.\n");
            return;
        }
    }

    printf("Invalid username.\n");
}

int main() {
    int choice;

    while (1) {
        printf("Main Menu\n");
        printf("1. Create User\n");
        printf("2. User Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createUser();
                break;
            case 2:
                userLogin();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}    
