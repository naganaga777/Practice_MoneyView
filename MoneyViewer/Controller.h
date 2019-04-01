//
//Controllerクラスの宣言部
//

#pragma once
#ifndef CONTROLLER
#define CONTROLLER

#include "IAccesser.h"
#include "IRepository.h"
#include "IDataObject.h"

//
//扱う会社を列挙体で登録する
//
enum CompanyName
{
    CompanyA = 1,
    CompanyB = 2,

};


class Controller
{
public:
 
    Controller(IAccesser* in_accesser, IRepository* in_repository);
    ~Controller();

    //
    //平均値を求める処理を行うメソッド
    //
    void AverageProc();

private:
    //
    //保存されたデータにアクセスするメンバ
    //
    IAccesser* accesser;

    //
    //Repository操作を行うメンバ
    //
    IRepository* repository;
};


#endif // !CONTROLLER
