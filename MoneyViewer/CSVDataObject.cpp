#include "pch.h"
#include "CSVDataObject.h"
#include <sstream>
//
//�R���X�g���N�^
//

CSVDataObject::CSVDataObject(vector<string> elements)
{
    for (unsigned int i = 0; i < elements.size(); ++i)
    {
        this->fields.push_back(elements.at(i));
    }
}

//
//�f�X�g���N�^
//
CSVDataObject::~CSVDataObject()
{

}

//
//�����ofileds�ɃA�N�Z�X���邽�߂̃v���p�e�B
//
vector<string>  CSVDataObject::GetObject()
{
    return this->fields;
}
//
//CSV�`���̃f�[�^�I�u�W�F�N�g����郁�\�b�h
//

IDataObject* CSVDataObject::CreatObject(string str)
{
    return new CSVDataObject(Split(str, ','));
}

//
//��������f���~�^��؂�ŕ���
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
