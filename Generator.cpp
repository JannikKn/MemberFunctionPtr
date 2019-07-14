//
// Created by User on 14.07.2019.
//

#include "Generator.h"
#include "VLW.h"
typedef  void (Generator::*GenMemFn)(int);

void Generator::send() {
    VLW a;
    a.processingMethod(*this, &Generator::foo);
}
