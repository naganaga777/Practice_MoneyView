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
    //CSVの１行のデータの読んでvectorに保存して返す
    //
    static vector<IDataObject*> ReadCSV();

    //
    //保存データのパス
    //
    static const string DATA_FILE_PATH;
};

#endif // CSVREADER
