#pragma once
#ifndef IWORKER
#define IWORKER

#include "pch.h"
#include  <iostream>
#include <vector>

using namespace std;

//
//�]�ƈ��̒��ۃN���X�@
//
class IWorker
{
public:
    virtual string Id();
    virtual string Name();
    virtual int Money();
    
};

#endif // !IWORKER
