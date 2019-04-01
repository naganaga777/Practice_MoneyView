#include "pch.h"
#include "CSVReader.h"
#include "IWorker.h"
#include "CSVAccesser.h"
#include "IDataObject.h"
#include "CSVDataObject.h"
using namespace std;

//
//�R���X�g���N�^
//
CSVAccesser::CSVAccesser(vector<IDataObject*> in_datas)
{
    this->datas = in_datas;

};

//
//�f�X�g���N�^
//
CSVAccesser::~CSVAccesser()
{
    for (unsigned int i = 0; i < this->datas.size(); ++i)
    {
        if (this->datas.at(i) != NULL)
        {
            delete this->datas.at(i);
            datas.at(i) = NULL;
        }
    }
};


//
//CSV�̃f�[�^�I�u�W�F�N�g���쐬���郁�\�b�h
//
IAccesser* CSVAccesser::CreateDataObjects()
{
    vector<IDataObject*> cSVData = CSVReader::ReadCSV();
    if (cSVData.empty())
    {
        cout << "�f�[�^�t�@�C�����s���ł�" << endl;
        return NULL;
    }
    return new CSVAccesser(cSVData);
}

//
//�f�[�^�I�u�W�F�N�g�̃|�C���^���擾����v���p�e�B
//
vector<IDataObject*> CSVAccesser::GetDatas()
{
    return this->datas;
}


