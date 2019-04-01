#include "pch.h"
#include "CompanyARepository.h"
#include "CompanyAWorker.h"
#include "../packages/cpplinq.2013.08.10/build/native/include/cpplinq.hpp"
using namespace cpplinq;

//
//�R���X�g���N�^
//
CompanyARepository::CompanyARepository(vector<IDataObject*> dataList)
{
    this->CreatCompanyAWorkerlist(dataList);
}

//
//�f�X�g���N�^
//
CompanyARepository::~CompanyARepository()
{
    for (rsize_t i = 0; i < this->workerList.size(); ++i)
    {
        if (this->workerList.at(i) != NULL)
        {
            delete this->workerList.at(i);
            this->workerList.at(i) = NULL;
        }
    }
}


//
//�S�]�ƈ����X�g���擾�����ۃ��\�b�h
//
vector<IWorker*> CompanyARepository::GetAllWorkers()
{
    //�����o��S���Ԃ�
    return this->workerList;
}

//
//�������s����ۃ��\�b�h
//
vector<IWorker*> CompanyARepository::Find(string key)
{
    //Key�Ń����o���猟�����s����������������
    vector<IWorker*> tmp(NULL);
    return tmp;
}


//
//CompanyA�̏]�ƈ����X�g�𐶐����郁�\�b�h
//
void CompanyARepository::CreatCompanyAWorkerlist(vector<IDataObject*> dataList)
{
    vector<IDataObject*> retObjects;
    for (size_t i = 0; i < dataList.size(); i++)
    {

        auto data = dataList.at(i)->GetObject();
        for (size_t element = 0; element < data.size(); ++element)
        {
            if ("CompanyA" == data.at(element))
            {
                this->workerList.push_back(new CompanyAWorker(data.at(1),
                                                              data.at(2),
                                                              atoi(data.at(3).c_str())));
            }
        }
    }
}
