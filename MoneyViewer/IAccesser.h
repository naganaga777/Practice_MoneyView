#pragma once
#ifndef IREPOSITORY
#define IREPOSITORY

#include <vector>

#include "IWorker.h"
#include "IDataObject.h"


class IAccesser
{
public:
    IAccesser() ;
    virtual ~IAccesser() ;


public:
    //
    //�v���p�e�B�Q�b�^�[
    //
    virtual vector<IDataObject*> GetDatas();
  
    
};

#endif // !IREPOSITORY

