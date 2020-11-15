#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Stiven Cabrera - CSC111

struct CustomerAccount
{
    string customer_name;
    string customer_address;
    string city;
    string state;
    string zipcode;
    string telephone;
    double account_balance;
    string last_payment_date;

};

void get_new_account(vector <CustomerAccount> &a)
{
    CustomerAccount new_account;

    cin.ignore();
    cout << "Enter account name: ";
    getline(cin, new_account.customer_name);

    cout << "Enter " << new_account.customer_name << "'s address: ";
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
    int choice, choice_2;
    //printing every name so user choices which account to edit
    for (size_t i = 0; i < a.size(); i++)
    {
        cout << i + 1 << ". " << a[i].customer_name << endl;
    }

    cout << "Enter a number to select corresponding account: ";
    cin >> choice;

    while(choice < 1 || choice > a.size())
    {
        cout << "Invalid input. Try again: " << endl;
        cin >> choice;
    }

    show_account_info(a[choice - 1]);

    cout << endl;
    cout << "Enter number to change corresponding piece of account information: ";
    cin >> choice_2;

    while (choice_2 < 1 || choice_2 > 8)
    {
        cout << "Invalid input. Try again: " << endl;
        cin >> choice_2;
    }

    switch (choice_2)
    {
        case 1:
            cout << "Old customer name: " << a[choice - 1].customer_name << endl;
            cout << "Enter new customer name: ";
            cin >> a[choice - 1].customer_name;
            cout << "Customer name has been changed to " << a[choice - 1].customer_name << endl;
            break;

        case 2:
            cout << "Old customer address: " << a[choice - 1].customer_address << endl;
            cout << "Enter new customer address: ";
            cin >> a[choice - 1].customer_address;
            cout << "Customer address has been changed to " << a[choice - 1].customer_address << endl;
            

        case 3:
            cout << "Old city: " << a[choice - 1].city << endl;
            cout << "Enter new city: ";
            cin >> a[choice - 1].city;
            cout << "city has been changed to " << a[choice - 1].city << endl;
            

        case 4:
            cout << "Old state: " << a[choice - 1].state << endl;
            cout << "Enter new state: ";
            cin >> a[choice - 1].state;
            cout << "state has been changed to " << a[choice - 1].state << endl;
            

        case 5:
            cout << "Old zipcode: " << a[choice - 1].zipcode << endl;
            cout << "Enter new zipcode: ";
            cin >> a[choice - 1].zipcode;
            cout << "zipcode has been changed to " << a[choice - 1].zipcode << endl;
            break;

        case 6:
            cout << "Old telephone: " << a[choice - 1].telephone << endl;
            cout << "Enter new telephone: ";
            cin >> a[choice - 1].telephone;
            cout << "Telephone has been changed to " << a[choice - 1].telephone << endl;
            break;

        case 7:
            cout << "Old account balance: $" << a[choice - 1].account_balance << endl;
            cout << "Enter new account balance: ";
            cin >> a[choice - 1].account_balance;
            cout << "Account balance has been updated to $" << a[choice - 1].account_balance << endl;
            break;

        case 8:
            cout << "Last payment date: " << a[choice - 1].last_payment_date << endl;
            cout << "New payment date: ";
            cin >> a[choice - 1].last_payment_date;
            cout << "Payment date is now: " << a[choice - 1].last_payment_date << endl;
            break;        
    }

}

bool run_program()
{
    int choice;

    cout << "Back to main menu?" << endl
        << "Enter 1 to get back to main menu or 0 to exit program: " << endl;
    
    cin >> choice;

    while(choice < 0 || choice > 1)
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
    int choice, account_choice;
    bool running = true;
    vector <CustomerAccount> accounts;

    while(running) 
    {
        //displaying menu
        cout << "1. Enter new account information" << endl
        << "2. Change account information" << endl
        << "3. Display all account information" << endl
        << "4. Exit" << endl;

        //getting menu choice
        cout << "Enter choice: ";
        cin >> choice;

        //choice validation
        while(choice <= 0 || choice > 4)
        {
            cout << "Invalid input. Try again: ";
            cin >> choice;
        }

        //menu choices
        switch(choice)
        {
            case 1:
                get_new_account(accounts);
                // show_account_info(accounts[0]);
                running = run_program();
                break;

            case 2:
                change_account_info(accounts);
                running = run_program();
                break;
            
            case 3:

                if(accounts.size() <= 0)
                {
                    cout << "No accounts to display." << endl;
                    
                }
                else
                {
                    for (size_t i = 0; i < accounts.size(); i++)
                    {
                        cout << i + 1 << ". " << accounts[i].customer_name << endl;
                    }

                    cout << "Enter a number to select corresponding account: ";
                    cin >> account_choice;

                    while(account_choice < 1 || account_choice > accounts.size())
                    {
                        cout << "Invalid input. Try again: " << endl;
                        cin >> account_choice;
                    }

                    show_account_info(accounts[account_choice - 1]);
                    
                }

                running = run_program();
                break;
            
            case 4:
                running = false;
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