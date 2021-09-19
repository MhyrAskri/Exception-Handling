#ifndef EXCEPTIONHANDLING_ILLEGALBALANCEEXCEPTION_H
#define EXCEPTIONHANDLING_ILLEGALBALANCEEXCEPTION_H

#include <exception>

class IllegalBalanceException : std::exception {

public:

    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept {

        return "Illegal Balance Exception";

    }

};


#endif //EXCEPTIONHANDLING_ILLEGALBALANCEEXCEPTION_H
