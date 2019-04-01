#include "pch.h"
#include "CSVDataObject.h"
#include <sstream>
//
//コンストラクタ
//

CSVDataObject::CSVDataObject(vector<string> elements)
{
    for (unsigned int i = 0; i < elements.size(); ++i)
    {
        this->fields.push_back(elements.at(i));
    }
}

//
//デストラクタ
//
CSVDataObject::~CSVDataObject()
{

}

//
//メンバfiledsにアクセスするためのプロパティ
//
vector<string>  CSVDataObject::GetObject()
{
    return this->fields;
}
//
//CSV形式のデータオブジェクトを作るメソッド
//

IDataObject* CSVDataObject::CreatObject(string str)
{
    return new CSVDataObject(Split(str, ','));
}

//
//文字列をデリミタ区切りで分割
//
vector<string> CSVDataObject::Split(string str, char delimeter)
{
    istringstream stream(str);
    string field="";
    vector<string> result;
    while (getline(stream, field, delimeter))
    {
        result.push_back(field);
    }

    return result;
}
