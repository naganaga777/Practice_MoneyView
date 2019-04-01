#pragma once
#include "IAccesser.h"
#include "IWorker.h"
#include "IDataObject.h"


class CSVAccesser :
    public IAccesser
{
private:
    //
    //�R���X�g���N�^
    //
    CSVAccesser(vector<IDataObject*> in_datas);

    //
    //�f�X�g���N�^
    //
    ~CSVAccesser();


public:
    //
    //�f�[�^�I�u�W�F�N�g�̃|�C���^���擾����v���p�e�B
    //
    vector<IDataObject*> GetDatas() override;

    //
    //CSV�̃f�[�^�I�u�W�F�N�g���쐬���郁�\�b�h
    //
    static IAccesser* CreateDataObjects();

private:
    //
    //�f�[�^�I�u�W�F�N�g�̃|�C���^���i�[����z��
    //
    vector<IDataObject*> datas;

};

