#pragma once
#ifndef CONSOLWVIWER
#define CONSOLEVIWER
#include "Controller.h"
#include "IWorker.h"

class ConsoleViwer
{
public:
    ConsoleViwer() {};
    ~ConsoleViwer() {};

    static CompanyName SelectCompany();

    //
    //CompanyA�̏]�ƈ����X�g��\�����郁�\�b�h
    //
    static void DisplayWorkerList(vector<IWorker*> workerList);

    //
    //���ϒl�̒l��\�����郁�\�b�h
    //
    static void DisplayAverage(int value);
};

#endif // !CONSOLWVIWER

