#include <iostream>
#include <memory>
#include <conio.h>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {

    unique_ptr<Account> moesAccount;
    unique_ptr<Account> larrysAccount;

    try {

        larrysAccount = make_unique<SavingsAccount>("Larry" , -2000.0);
        cout << *larrysAccount << endl;

    } catch (const IllegalBalanceException &ex) {

        cerr << ex.what() << endl;

    }

    try {

        moesAccount = make_unique<SavingsAccount>("Moe" , 1000.0);
        cout << *moesAccount << endl;
        moesAccount->withdraw(500.0);
        cout << *moesAccount << endl;
        moesAccount->withdraw(1000.0);
        cout << *moesAccount << endl;

    } catch (const IllegalBalanceException &ex) {

        cerr << ex.what() << endl;

    } catch (const InsufficientFundsException &ex) {

        cerr << ex.what() << endl;

    }
    cout << "Program completed successfully" << endl;

    getch();
    return 0;

}
