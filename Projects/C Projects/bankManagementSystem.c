/*
Bank Management System project:

Features:

Create a new account

Deposit money

Withdraw money

Display account details

Print Account Statement

Exit
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Transaction {
    char type[10];
    float amount;
};

struct Account {
    int accountNumber;
    char name[50];
    float balance;
    struct Transaction transactions[100];
    int transactionCount;
};

struct Account accounts[50];
int accountCount = 0;

void createAccount();
void depositMoney(int accountNumber);
void withdrawMoney(int accountNumber);
void displayAccountDetails(int accountNumber);
int findAccountByNumber(int accountNumber);
void printMiniStatement(int accountNumber);

int main() {
    int choice, accountNumber;

    while (1) {
        printf("\n=== Bank Management System === \n");
        printf("1. Create a New Account \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Display Account Details \n");
        printf("5. Print Mini Statement \n");
        printf("6. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                printf("Enter account number: ");
                scanf("%d", &accountNumber);
                depositMoney(accountNumber);
                break;
            case 3:
                printf("Enter account number: ");
                scanf("%d", &accountNumber);
                withdrawMoney(accountNumber);
                break;
            case 4:
                printf("Enter account number: ");
                scanf("%d", &accountNumber);
                displayAccountDetails(accountNumber);
                break;
            case 5:
                printf("Enter account number: ");
                scanf("%d", &accountNumber);
                printMiniStatement(accountNumber);
                break;
            case 6:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void createAccount() {
    struct Account newAccount;
    newAccount.accountNumber = accountCount + 1;
    newAccount.balance = 0.0f;
    newAccount.transactionCount = 0;

    printf("Enter account holder's name: ");
    getchar();
    fgets(newAccount.name, 50, stdin);
    newAccount.name[strcspn(newAccount.name, "\n")] = 0;

    accounts[accountCount] = newAccount;
    accountCount++;
    printf("Account created successfully! Account Number: %d\n", newAccount.accountNumber);
}

void depositMoney(int accountNumber) {
    int index = findAccountByNumber(accountNumber);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Deposit amount must be positive.\n");
        return;
    }

    accounts[index].balance += amount;

    struct Transaction newTransaction;
    strcpy(newTransaction.type, "Deposit");
    newTransaction.amount = amount;
    accounts[index].transactions[accounts[index].transactionCount] = newTransaction;
    accounts[index].transactionCount++;

    printf("Deposited %.2f successfully. New balance: %.2f\n", amount, accounts[index].balance);
}

void withdrawMoney(int accountNumber) {
    int index = findAccountByNumber(accountNumber);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
        return;
    }

    if (accounts[index].balance < amount) {
        printf("Insufficient balance.\n");
        return;
    }

    accounts[index].balance -= amount;

    struct Transaction newTransaction;
    strcpy(newTransaction.type, "Withdrawal");
    newTransaction.amount = amount;
    accounts[index].transactions[accounts[index].transactionCount] = newTransaction;
    accounts[index].transactionCount++;

    printf("Withdrew %.2f successfully. New balance: %.2f\n", amount, accounts[index].balance);
}

void displayAccountDetails(int accountNumber) {
    int index = findAccountByNumber(accountNumber);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    printf("\nAccount Number: %d\n", accounts[index].accountNumber);
    printf("Account Holder: %s\n", accounts[index].name);
    printf("Balance: %.2f\n", accounts[index].balance);
}

int findAccountByNumber(int accountNumber) {
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            return i;
        }
    }
    return -1;
}

void printMiniStatement(int accountNumber) {
    int index = findAccountByNumber(accountNumber);
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    FILE *fptr = fopen("Account_Statement.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fptr, "Account Number: %d \n", accounts[index].accountNumber);
    fprintf(fptr, "Account Name: %s \n", accounts[index].name);
    fprintf(fptr, "Account Balance: %.2f \n", accounts[index].balance);

    fprintf(fptr, "\nTransaction History:\n");
    for (int i = 0; i < accounts[index].transactionCount; i++) {
        fprintf(fptr, "%s: %.2f\n", accounts[index].transactions[i].type, accounts[index].transactions[i].amount);
    }

    fclose(fptr);

    printf("Mini Statement printed Successfully! \n");
}