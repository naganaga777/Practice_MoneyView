//
//Wirker�N���X�̎�����
//

#include "pch.h"
#include "CompanyAWorker.h"
using namespace std;

//
//�R���X�g���N�^
//
CompanyAWorker::CompanyAWorker(string id, string name, int money)
{
    this->id = id;
    this->name = name;
    this->money = money;
}

//
//�f�X�g���N�^
//
//
CompanyAWorker::~CompanyAWorker()
{

}

//
//Getter�v���p�e�B�̎���
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
