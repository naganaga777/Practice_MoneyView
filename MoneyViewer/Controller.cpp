//
//Controller�N���X�̎���
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
//�R���X�g���N�^
//
Controller::Controller(IAccesser* in_accesser, IRepository* in_repository)
{
    this->accesser = in_accesser;
    this->repository = in_repository;
}

//
//�f�X�g���N�^
//

Controller::~Controller(){}

//
//���ϒl�����߂鏈�����s�����\�b�h
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

