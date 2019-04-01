#pragma once
#include "IAccesser.h"
#include "IWorker.h"
#include "IDataObject.h"


class CSVAccesser :
    public IAccesser
{
private:
    //
    //コンストラクタ
    //
    CSVAccesser(vector<IDataObject*> in_datas);

    //
    //デストラクタ
    //
    ~CSVAccesser();


public:
    //
    //データオブジェクトのポインタを取得するプロパティ
    //
    vector<IDataObject*> GetDatas() override;

    //
    //CSVのデータオブジェクトを作成するメソッド
    //
    static IAccesser* CreateDataObjects();

private:
    //
    //データオブジェクトのポインタを格納する配列
    //
    vector<IDataObject*> datas;

};

