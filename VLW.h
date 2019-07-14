//
// Created by User on 14.07.2019.
//

#ifndef FUNCTIONPTR_VLW_H
#define FUNCTIONPTR_VLW_H

#include "AbstractGenerator.h"
#include "Generator.h"

typedef  void (Generator::*GenMemFn)(int);
class VLW{
    //AbstractGenerator* m_gen_ptr;
public:
    void processingMethod(Generator gen, GenMemFn func_ptr);
};




#endif //FUNCTIONPTR_VLW_H
