#include "pch.h"
#include "IRepository.h"

//
//全従業員リストを取得するメソッド
//
vector<IWorker*> IRepository::GetAllWorkers()
{
    //具象クラスでオーバライド
    vector<IWorker*> tmp(NULL);
    return tmp;
}

//
//検索を行うメソッド
//
vector<IWorker*> IRepository::Find(string key)
{
    //具象クラスでオーバーライド
    vector<IWorker*> tmp(NULL);
    return tmp;
}
