#include "pch.h"
#include "CompanyARepository.h"
#include "CompanyAWorker.h"
#include "../packages/cpplinq.2013.08.10/build/native/include/cpplinq.hpp"
using namespace cpplinq;

//
//コンストラクタ
//
CompanyARepository::CompanyARepository(vector<IDataObject*> dataList)
{
    this->CreatCompanyAWorkerlist(dataList);
}

//
//デストラクタ
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
//全従業員リストを取得する具象メソッド
//
vector<IWorker*> CompanyARepository::GetAllWorkers()
{
    //メンバを全部返す
    return this->workerList;
}

//
//検索を行う具象メソッド
//
vector<IWorker*> CompanyARepository::Find(string key)
{
    //Keyでメンバから検索を行う処理を実装する
    vector<IWorker*> tmp(NULL);
    return tmp;
}


//
//CompanyAの従業員リストを生成するメソッド
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
