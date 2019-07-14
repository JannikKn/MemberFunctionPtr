//
// Created by User on 14.07.2019.
//
#include "VLW.h"

//typedef  void (Generator::*GenMemFn)(int);

void VLW::processingMethod(Generator gen, GenMemFn func_ptr) {
    (gen.*func_ptr)(20);
}

