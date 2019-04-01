#include "pch.h"
#include "CSVReader.h"
#include "IWorker.h"
#include "CSVAccesser.h"
#include "IDataObject.h"
#include "CSVDataObject.h"
using namespace std;

//
//コンストラクタ
//
CSVAccesser::CSVAccesser(vector<IDataObject*> in_datas)
{
    this->datas = in_datas;

};

//
//デストラクタ
//
CSVAccesser::~CSVAccesser()
{
    for (unsigned int i = 0; i < this->datas.size(); ++i)
    {
        if (this->datas.at(i) != NULL)
        {
            delete this->datas.at(i);
            datas.at(i) = NULL;
        }
    }
};


//
//CSVのデータオブジェクトを作成するメソッド
//
IAccesser* CSVAccesser::CreateDataObjects()
{
    vector<IDataObject*> cSVData = CSVReader::ReadCSV();
    if (cSVData.empty())
    {
        cout << "データファイルが不正です" << endl;
        return NULL;
    }
    return new CSVAccesser(cSVData);
}

//
//データオブジェクトのポインタを取得するプロパティ
//
vector<IDataObject*> CSVAccesser::GetDatas()
{
    return this->datas;
}


