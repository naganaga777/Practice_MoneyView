#pragma once
#include "IRepository.h"

class CompanyARepository : public IRepository
{
public:
    CompanyARepository(vector<IDataObject*> dataList);
    ~CompanyARepository();

private:
    //
    //CompanyAWorkerのリスト
    //
    vector<IWorker*> workerList;

public:
    //
    //全ての従業員リストを取得するメソッド（メンバをそのまま返す）
    //
    vector<IWorker*> GetAllWorkers()override;

    //
    //メンバからKeyで検索を行うメソッド
    //
    vector<IWorker*> Find(string key)override;


private:
    //
    //CompanyAWorkerだけのデータリストを生成するメソッド
    //
    void CreatCompanyAWorkerlist(vector<IDataObject*> object);
};

