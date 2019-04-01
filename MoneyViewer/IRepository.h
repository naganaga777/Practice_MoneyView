#pragma once
#include <vector>
#include "IWorker.h"
#include "IDataObject.h"

class IRepository
{
public:
    //
    //コンストラクタ
    //
    IRepository() {};

    //
    //デストラクタ
    //
    virtual ~IRepository() {};

    //
    //全ての従業員を取得するインターフェース　
    //
    virtual vector<IWorker*> GetAllWorkers();

    //
    //検索を行うメソッドインターフェース
    //
    virtual vector<IWorker*> Find(string key);
    

};

