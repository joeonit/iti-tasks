/******************************************************************************

q-Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, withdraw money, and deposit funds.
 
 Note : When i first made this program it was very messy after i did my research it turns out it is best done with classes and ojects, i tried doing it with classes but it was complicated as i'm not familiar with OOP so ended up using struct which i also wasn't familiar with but it was easier to unerestadn
 
 
 Thinking process :
 >The program defines a User structure with attributes such as userName, cardNum, cvc, and balance.
 >It uses a constant MAX_USERS to set the maximum number of users.
 >Functions are implemented to add a user, perform login, add balance, and withdraw balance.
 >The main program presents a welcome menu allowing users to log in, add a new user, or exit.
 >Upon successful login, users are presented with a user menu allowing them to check balance, deposit, or withdraw funds.
 >The program uses loops to run user interaction also deal with invalid choices, insufficient funds, etc.
 
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

const int MAX_USERS = 10;

struct User {
    string userName;
    int cardNum;
    int cvc;
    double balance;
};

User users[MAX_USERS];
int currentUserIndex = 0;

void addUser() {
    if (currentUserIndex < MAX_USERS) {
        cout << "Enter user name, card number, CVC, and balance in order: ";
        cin >> users[currentUserIndex].userName >> users[currentUserIndex].cardNum >>
            users[currentUserIndex].cvc >> users[currentUserIndex].balance;
        currentUserIndex++;
    } else {
        cout << "Maximum number of users reached.\n";
    }
}

bool login() {
    int cardNum, cvc;
    cout << "Enter card number followed by CVC: ";
    cin >> cardNum >> cvc;

    for (int i = 0; i < currentUserIndex; i++) {
        if (users[i].cardNum == cardNum && users[i].cvc == cvc) {
            cout << "Login successful!\n";
            return true;
        }
    }

    cout << "Invalid card number or CVC. Login failed.\n";
    return false;
}

void addBalance() {
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    users[currentUserIndex - 1].balance += amount;
    cout << "Balance added successfully. Current balance: " << users[currentUserIndex - 1].balance << "\n";
}

void withdrawBalance() {
    double amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;

    if (amount <= users[currentUserIndex - 1].balance) {
        users[currentUserIndex - 1].balance -= amount;
        cout << "Withdrawal successful. Current balance: " << users[currentUserIndex - 1].balance << "\n";
    } else {
        cout << "Insufficient funds. Withdrawal failed.\n";
    }
}

int main() {
    int welcomeMenuChoice;
    do {
        cout << "Welcome To log in enter 1, and to add a new user, enter 2 and To exit enter 0: ";
        cin >> welcomeMenuChoice;

        if (welcomeMenuChoice == 1) {
            if (login()) {
                int userMenuChoice;
                do {
                    cout << "User Menu: \n"
                         << "1. Check Balance\n"
                         << "2. Deposit\n"
                         << "3. Withdraw\n";
                    cin >> userMenuChoice;

                    switch (userMenuChoice) {
                        case 1:
                            cout << "Balance: " << users[currentUserIndex - 1].balance << "\n";
                            break;
                        case 2:
                            addBalance();
                            break;
                        case 3:
                            withdrawBalance();
                            break;
                        default:
                            cout << "Enter a valid choice.\n";
                            break;
                    }
                } while (userMenuChoice != 0);
            }
        } else if (welcomeMenuChoice == 2) {
            addUser();
        } else if (welcomeMenuChoice != 0) {
            cout << "Enter a valid choice.\n";
        }
    } while (welcomeMenuChoice != 0);

    cout << "Exiting the program.\n";

    return 0;
}
