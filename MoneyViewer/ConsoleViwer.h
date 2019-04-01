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
    //CompanyAの従業員リストを表示するメソッド
    //
    static void DisplayWorkerList(vector<IWorker*> workerList);

    //
    //平均値の値を表示するメソッド
    //
    static void DisplayAverage(int value);
};

#endif // !CONSOLWVIWER

