#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct CustomerAccount
{
    string customer_name;
    string customer_address;
    string city;
    string state;
    int zipcode;
    string telephone;
    double account_balance;
    string last_payment_date;

};

void get_new_account(vector <CustomerAccount> &a)
{
    CustomerAccount new_account;

    cout << "Enter account name: ";
    cin >> new_account.customer_name;


    cout << "Enter " << new_account.customer_name << "'s address: ";
    cin.ignore();
    getline(cin, new_account.customer_address);

    cout << "City: ";
    getline(cin, new_account.city);

    cout << "State: ";
    getline(cin, new_account.state);

    cout << "Zipcode: ";
    cin >> new_account.zipcode;


    cout << "Enter " << new_account.customer_name << "'s telephone number: ";
    cin.ignore();
    getline(cin, new_account.telephone);

    cout << "Enter " << new_account.customer_name << "'s account balance: ";
    cin >> new_account.account_balance;

    while (new_account.account_balance < 0)
    {
        cout << "Account balance can not be negative. Try again: ";
        cin >> new_account.account_balance;
    }


    cout << "Enter date of last payment in MM/DD/YYYY: ";
    cin >> new_account.last_payment_date;


    cout << "You have successfully created new account for " << new_account.customer_name << endl;

    a.push_back(new_account);

}

void show_account_info(CustomerAccount a)
{
    cout << "1. Customer name: " << a.customer_name << endl
        << "2. Customer address: " << a.customer_address << endl
        << "3. City: " << a.city << endl
        << "4. State: " << a.state << endl
        << "5. Zipcode: " << a.zipcode << endl
        << "6. Telephone: " << a.telephone << endl
        << "7. Account balance: $" << a.account_balance << endl
        << "8. Date of last payment: " << a.last_payment_date << endl;
}

void change_account_info(vector <CustomerAccount>&a)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << i + 1 << ": " << a[i].customer_name << endl;
    }
    
}

bool run_program()
{
    int choice;

    cout << "Back to main menu?" << endl
        << "Enter 1 to get back to main menu or 0 to exit program: " << endl;
    
    cin >> choice;

    while(choice != 0 || choice != 1)
    {
        cout << "Invalid input." << endl
            << "Enter 1 to get back to main menu or 0 to exit program: ";
        
        cin >> choice;
    }

    switch (choice)
    {
        case 1:
            return true;
            break;

        case 0:
            return false;
            break;
    }
}




int main()
{
    int choice;
    bool running = true;
    vector <CustomerAccount> accounts;

    while(running) 
    {
        cout << "1. Enter new account information" << endl
        << "2. Change account information" << endl
        << "3. Display all account information" << endl
        << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        while(choice <= 0 || choice > 4)
        {
            cout << "Invalid input. Try again: ";
            cin >> choice;
        }


        switch(choice)
        {
            case 1:
                get_new_account(accounts);
                show_account_info(accounts[0]);
                running = run_program;
                break;

            case 2:
                change_account_info(accounts);
                running = run_program;
                break;
            
            case 3:
                break;
            
            case 4:
                break;

        }


        if (running)
        {
            continue;
        }
        else 
        {
            break;
        }

    }



    return 0;
}