//
//Worker�N���X�̐錾��
//
#pragma once
#ifndef WORKER_
#include "pch.h"
#include <iostream>
#include "IWorker.h"
using namespace std;


class CompanyAWorker :public IWorker
{
public:
    //
    //�R���X�g���N�^
    //
    CompanyAWorker(string id, string name, int money);

    //
    //�f�X�g���N�^
    //
    ~CompanyAWorker();

private:
    //ID�A���O�A������    
    string id;
    string name;
    int money;

public:
    //
    //id��Gettrt
    //
    string Id();

    //
    //name��Gettrt
    //
     //
    string Name();

    //
    //money��Gettrt
    //
    int Money();
};

#define WOKER_
#endif // !WORKER_
