#pragma once
#include <vector>
using namespace std;


class IDataObject
{
public:
    IDataObject() {};
    virtual ~IDataObject() {};

     //
     //�����o�ɃA�N�Z�X���邽�߂̃v���p�e�B �ˁ@�y�����z������String�ł͂Ȃ��A�e���v���[�g�ɂ��������ǁA����d�l�㖳���H�H
     //
     virtual vector<string>  GetObject();
};

