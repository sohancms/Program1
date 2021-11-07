#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;

char mainMenu();
void createAccount();
void login();

int main()
{
    system("cls");
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
            createAccount();
            break;
        case 'v':
        case 'V':
            cout << endl;
            cout << "Thank You for using our bank and Future Computer Programmer ATM Machine! \n For you continued support,We are offering 3% cash back on all debit purchases." << endl;
            cout << endl;
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
    cin >> choice;
    return choice;
}

void createAccount()
{
    string username;
    string password;
    cout << "Please create a username : ";
    cin >> username;
    cout << "Please create a password: ";
    cin >> password;
    ofstream createaccount;
    createaccount.open("account.txt");
    createaccount << username << " " << password;
    createaccount.close();
    cout << "Information saved" << endl;
}

void login()
{
    string username;
    string password;
    cout << "Please enter your username : ";
    cin >> username;
    cout << "Please enter your password : ";
    cin >> password;
    ifstream savedaccount;
    savedaccount.open("account.txt");
    savedaccount >> username >> password;
    savedaccount.close();
    cout << "Login Successful";
}