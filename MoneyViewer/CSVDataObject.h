#pragma once
#ifndef CSVDATAOBJECT
#define CSVDATAOBJECT

#include "IDataObject.h"
class CSVDataObject :IDataObject
{
private:
    CSVDataObject(vector<string> elements) ;
    ~CSVDataObject() ;

public:
    //
    //メンバfiledsにアクセスするためのプロパティ
    //
    vector<string>  GetObject()override;

    //
    //CSVのデータオブジェクトを作成するメソッド
    //
    static IDataObject* CreatObject(string str);

private:
    //
    //一行の各フィールドを格納したメンバ
    //
    vector <string> fields;


private:
    //
    //文字列をdelimiter区切りにするメソッド
    //
    static vector<string> Split(string str, char delimeter);

};
#endif // DATA

