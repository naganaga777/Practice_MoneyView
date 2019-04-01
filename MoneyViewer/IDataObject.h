#pragma once
#include <vector>
using namespace std;


class IDataObject
{
public:
    IDataObject() {};
    virtual ~IDataObject() {};

     //
     //メンバにアクセスするためのプロパティ ⇒　【メモ】ここをStringではなく、テンプレートにしたいけど、言語仕様上無理？？
     //
     virtual vector<string>  GetObject();
};

