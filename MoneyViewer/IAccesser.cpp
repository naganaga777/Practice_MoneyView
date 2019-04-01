#include "pch.h"
#include "IAccesser.h"

#include <iostream>
using namespace std;

//
//コンストラクタ
//
IAccesser::IAccesser() {};

//
//デストラクタ
//
IAccesser::~IAccesser() {};


//
//データにアクセスするためのプロパティ
//
vector<IDataObject*> IAccesser::GetDatas()
{
    //派生クラスでオーバライドする
    vector<IDataObject*> tmp(NULL);
    return tmp;
}


