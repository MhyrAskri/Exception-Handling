#ifndef EXCEPTIONHANDLING_IPRINTABLE_H
#define EXCEPTIONHANDLING_IPRINTABLE_H

#include <iostream>

class IPrintable {

    friend std::ostream &operator<<(std::ostream &os , const IPrintable &obj);

public:

    virtual void print(std::ostream &os) const = 0;
    virtual ~IPrintable() = default;

};

#endif //EXCEPTIONHANDLING_IPRINTABLE_H