#pragma once
#include "IRepository.h"

class CompanyARepository : public IRepository
{
public:
    CompanyARepository(vector<IDataObject*> dataList);
    ~CompanyARepository();

private:
    //
    //CompanyAWorker�̃��X�g
    //
    vector<IWorker*> workerList;

public:
    //
    //�S�Ă̏]�ƈ����X�g���擾���郁�\�b�h�i�����o�����̂܂ܕԂ��j
    //
    vector<IWorker*> GetAllWorkers()override;

    //
    //�����o����Key�Ō������s�����\�b�h
    //
    vector<IWorker*> Find(string key)override;


private:
    //
    //CompanyAWorker�����̃f�[�^���X�g�𐶐����郁�\�b�h
    //
    void CreatCompanyAWorkerlist(vector<IDataObject*> object);
};

