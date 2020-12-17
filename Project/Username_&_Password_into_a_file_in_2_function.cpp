#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;

char mainMenu();
void creatAccount();
void bankingMenu();
void deposit();
void withdraw();
void displayBalance();
void ShowTransHist();

int main()
{
    char choice;
    while (choice != 'q' || choice != 'Q')
    {
        choice = mainMenu();
        if (choice == 'q' || choice == 'Q')
        {
            break;
        }
        switch (choice)
        {
        case 'l':
        case 'L':
            login();
            break;
        case 'c':
        case 'C':
            creatAccount();
            break;
        case 'v':
        case 'V':
            cout << "Thank You for using our bank and Future Computer Programmer ATM Machine! \n For you continued support,We are offering 3% cash back on all debit purchases." << endl;
        }
    }
    return 0;
}

char mainMenu() //Function to display the main menu. not banking menu
{
    char choice;
    cout << "Please select an option from the menu below:" << endl;
    cout << "l -> Login" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "v -> View Promotions" << endl;
    cout << "q -> Quit" << endl;
    cout << "Enter your choice: " << endl;
    return choice;
}
