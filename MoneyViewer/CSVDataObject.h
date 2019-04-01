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
    //�����ofileds�ɃA�N�Z�X���邽�߂̃v���p�e�B
    //
    vector<string>  GetObject()override;

    //
    //CSV�̃f�[�^�I�u�W�F�N�g���쐬���郁�\�b�h
    //
    static IDataObject* CreatObject(string str);

private:
    //
    //��s�̊e�t�B�[���h���i�[���������o
    //
    vector <string> fields;


private:
    //
    //�������delimiter��؂�ɂ��郁�\�b�h
    //
    static vector<string> Split(string str, char delimeter);

};
#endif // DATA

