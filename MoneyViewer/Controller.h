//
//Controller�N���X�̐錾��
//

#pragma once
#ifndef CONTROLLER
#define CONTROLLER

#include "IAccesser.h"
#include "IRepository.h"
#include "IDataObject.h"

//
//������Ђ�񋓑̂œo�^����
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
    //���ϒl�����߂鏈�����s�����\�b�h
    //
    void AverageProc();

private:
    //
    //�ۑ����ꂽ�f�[�^�ɃA�N�Z�X���郁���o
    //
    IAccesser* accesser;

    //
    //Repository������s�������o
    //
    IRepository* repository;
};


#endif // !CONTROLLER
