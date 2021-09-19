#ifndef EXCEPTIONHANDLING_ACCOUNTUTIL_H
#define EXCEPTIONHANDLING_ACCOUNTUTIL_H

#include <vector>
#include "Account.h"

// utility helper functions for Account * class
void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts , double amount);
void withdraw(std::vector<Account *> &accounts , double amount);

#endif //EXCEPTIONHANDLING_ACCOUNTUTIL_H
