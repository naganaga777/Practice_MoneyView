//
//Workerクラスの宣言部
//
#pragma once
#ifndef WORKER_
#include "pch.h"
#include <iostream>
#include "IWorker.h"
using namespace std;


class CompanyAWorker :public IWorker
{
public:
    //
    //コンストラクタ
    //
    CompanyAWorker(string id, string name, int money);

    //
    //デストラクタ
    //
    ~CompanyAWorker();

private:
    //ID、名前、所持金    
    string id;
    string name;
    int money;

public:
    //
    //idのGettrt
    //
    string Id();

    //
    //nameのGettrt
    //
     //
    string Name();

    //
    //moneyのGettrt
    //
    int Money();
};

#define WOKER_
#endif // !WORKER_
