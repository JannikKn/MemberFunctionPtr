//
// Created by User on 14.07.2019.
//

#ifndef FUNCTIONPTR_GENERATOR_H
#define FUNCTIONPTR_GENERATOR_H


#include "AbstractGenerator.h"


class Generator: public AbstractGenerator{
protected:

    void foo(int a){
        std::cout << "Method got called: " << a << std::endl;
    }

public:
    void send();
};


#endif //FUNCTIONPTR_GENERATOR_H
