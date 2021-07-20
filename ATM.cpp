#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

/*
Mini Project = ATM
-> Check Balance
-> Cash withdraw
-> User Details
-> Update Mobile No
*/

class atm                           // Class atm
{
private:                            // Private member variables
    long int account_no;
    string name;
    int PIN;
    double balance;
    string mobile_no;

public:                             // Public member functions
    // setData function as the setter of private member var
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
    {
        account_no = account_No_a;      // assigning formal arguments to the private member var's
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_no = mobile_No_a;
    }

    // getAccountNo function is getter function for ac_no
    long int getAccountNo()
    {
        return account_no;
    }
    // getter for user's name
    string getName()
    {
        return name;
    }
    // getter for user's PIN
    int getPIN()
    {
        return PIN;
    }
    // getter for balance
    double getBalance()
    {
        return balance;
    }
    // getter for mobile no
    string getMobileNo()
    {
        return mobile_no;
    }

    // setMobile function is now Updating the user mobile no
    void setMobile(string mob_prev, string mob_new)
    {
        if (mob_prev == mobile_no)      // Check match for existing mob no
        {
            mobile_no = mob_new;        // and update with new, if old matches
            cout << endl << "Successfully Updated Mobile number.";
            _getch();                   // getch is to hold the screen (untill user press any key)
        }
        else                            // if the user enter incorrect old mobile number then it won't update
        {
            cout << endl << "Mobile number doesn't match.\nTry again!!!";
            _getch();
        }
    }

    // cashWithDraw function is used to withdraw money from ATM
    void cashWithDraw(int amount_a)
    {
        if (amount_a > 0 && amount_a < balance)     // Check entered amount validity
        {
            balance -= amount_a;
            cout << endl << "Please collect your cash";
            cout << endl << "Available balance is: " << balance;
            _getch();
        }
        else
        {
            cout << endl << "Invalid input or Insufficient balance!";
            _getch();
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int choice = 0, enterPIN;
    long int enterAccountNo;

    system("cls");      // it will work like clrscr() function of C

    // created user (object)
    atm user1;
    // set user details (into object)   (setting default data)
    user1.setData(1234567, "John",1111,49000.49,"987654321");

    do
    {
        system("cls");

        cout << endl << "*****Welcome to ATM*****" << endl;
        cout << endl << "Enter your account number: ";
        cin >> enterAccountNo;                              // storing user account number for further validation

        cout << endl << "Enter PIN: ";
        cin >> enterPIN;                                    // storing user pin for further validation


        // check whether enter values matches with user details
        if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
        {
            do
            {
                int amount = 0;
                string oldMobNo, newMobNo;

                system("cls");
                // user interface
                cout << endl << "*****Welcome to ATM*****" << endl;
                cout << endl << "Select Options ";
                cout << endl << "1. Check Balance";
                cout << endl << "2. Cash Withdraw";
                cout << endl << "3. Show user details";
                cout << endl << "4. Update mobile number";
                cout << endl << "5. Exit" << endl;
                cin >> choice;                              // Taking user choice

                switch (choice)
                {
                case 1:
                    cout << endl << "Your bank balance is: " <<  user1.getBalance();
                    _getch();
                    break;

                case 2:
                    cout << endl << "Enter the amount: ";
                    cin >> amount;
                    user1.cashWithDraw(amount);
                    break;

                case 3:
                    cout << endl << "***User Details***";
                    cout << endl << "* Account No -> " << user1.getAccountNo();
                    cout << endl << "* Name -> " << user1.getName();
                    cout << endl << "* Balance -> " << user1.getBalance();
                    cout << endl << "* Mobile No -> " << user1.getMobileNo();

                    _getch();
                    break;

                case 4:
                    cout << endl << "Enter Old Mobile number: ";
                    cin >> oldMobNo;
                    cout << endl << "Enter New Mobile number: ";
                    cin >> newMobNo;

                    user1.setMobile(oldMobNo, newMobNo);
                    break;

                case 5:
                    exit(0);

                default:
                    cout << endl << "Enter valid Data !!!";
                }

            } while(1);     // MENU    // Condition is always true and loop is capable of running infinite times
        }
        else
        {
            cout << endl << "Invalid Credentials" << endl;
            exit(0);
        }
    }while(1);
}
