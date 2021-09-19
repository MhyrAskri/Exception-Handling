#ifndef EXCEPTIONHANDLING_INSUFFICIENTFUNDSEXCEPTION_H
#define EXCEPTIONHANDLING_INSUFFICIENTFUNDSEXCEPTION_H

#include <exception>

class InsufficientFundsException : public std::exception{

public:

    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept {

        return "Insufficient Funds Exception";

    }

};


#endif //EXCEPTIONHANDLING_INSUFFICIENTFUNDSEXCEPTION_H
