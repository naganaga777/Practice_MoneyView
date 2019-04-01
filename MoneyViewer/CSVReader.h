#pragma once
#ifndef CSVREADER
#define CSVREADER
#include <iostream>
#include <vector>
//#include "CSVRow.h"
#include "CSVDataObject.h"
using namespace std;

class CSVReader
{
private:
    CSVReader();
    ~CSVReader();

public:
    //
    //CSV�̂P�s�̃f�[�^�̓ǂ��vector�ɕۑ����ĕԂ�
    //
    static vector<IDataObject*> ReadCSV();

    //
    //�ۑ��f�[�^�̃p�X
    //
    static const string DATA_FILE_PATH;
};

#endif // CSVREADER
