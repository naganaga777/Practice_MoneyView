//
//Wirkerクラスの実装部
//

#include "pch.h"
#include "CompanyAWorker.h"
using namespace std;

//
//コンストラクタ
//
CompanyAWorker::CompanyAWorker(string id, string name, int money)
{
    this->id = id;
    this->name = name;
    this->money = money;
}

//
//デストラクタ
//
//
CompanyAWorker::~CompanyAWorker()
{

}

//
//Getterプロパティの実装
//
string CompanyAWorker::Id()
{
    return this->id;
}
string CompanyAWorker::Name()
{
    return this->name;
}
int CompanyAWorker::Money()
{
    return this->money;
}
