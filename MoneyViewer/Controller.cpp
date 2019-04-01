//
//Controllerクラスの実装
//
#include "pch.h"
#include "Controller.h"
#include  <iostream>
#include "ConsoleViwer.h"
#include "CompanyAWorker.h"
#include "Calculater.h"
#include "IWorker.h"
#include "IAccesser.h"

using namespace std;


//
//コンストラクタ
//
Controller::Controller(IAccesser* in_accesser, IRepository* in_repository)
{
    this->accesser = in_accesser;
    this->repository = in_repository;
}

//
//デストラクタ
//

Controller::~Controller(){}

//
//平均値を求める処理を行うメソッド
//
void Controller::AverageProc()
{
    vector<IWorker*> workeList = this->repository->GetAllWorkers();
    vector<int> calculaterList;
    for (size_t i = 0; i < workeList.size(); i++)
    {
        calculaterList.push_back(workeList.at(i)->Money());
    }
    
    ConsoleViwer::DisplayWorkerList(workeList);
    ConsoleViwer::DisplayAverage(Calculater::CalcAverage(calculaterList));
}

