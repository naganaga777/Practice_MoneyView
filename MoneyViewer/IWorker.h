#pragma once
#ifndef IWORKER
#define IWORKER

#include "pch.h"
#include  <iostream>
#include <vector>

using namespace std;

//
//]‹Æˆõ‚Ì’ŠÛƒNƒ‰ƒX@
//
class IWorker
{
public:
    virtual string Id();
    virtual string Name();
    virtual int Money();
    
};

#endif // !IWORKER
