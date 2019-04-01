#pragma once
#include <vector>
#include "IWorker.h"
#include "IDataObject.h"

class IRepository
{
public:
    //
    //�R���X�g���N�^
    //
    IRepository() {};

    //
    //�f�X�g���N�^
    //
    virtual ~IRepository() {};

    //
    //�S�Ă̏]�ƈ����擾����C���^�[�t�F�[�X�@
    //
    virtual vector<IWorker*> GetAllWorkers();

    //
    //�������s�����\�b�h�C���^�[�t�F�[�X
    //
    virtual vector<IWorker*> Find(string key);
    

};

