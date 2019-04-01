#include "pch.h"
#include <fstream>
#include <string>
#include "CSVReader.h"
//#include "CSVRow.h"

using namespace std;
//
//コンストラクタ
//

CSVReader::CSVReader()
{
}

//
//デストラクタ
//
CSVReader::~CSVReader()
{
}

//
//CSVの読んでvectorに１行ずつ保存して返す
//
vector<IDataObject*> CSVReader::ReadCSV()
{
    vector<IDataObject*> CSVDataObjects;
    std::ifstream ifs;
    ifs.open(DATA_FILE_PATH.c_str());
    if (ifs.fail())
    {
        return CSVDataObjects;
    }
    while (!ifs.eof())
    {
        string tmp = "";
        getline(ifs, tmp);
        if (!tmp.empty() && ('#' != tmp.at(0)))
        {
            CSVDataObjects.push_back(CSVDataObject::CreatObject(tmp));
        }
    }
    ifs.close();

    return CSVDataObjects;
}


//
//データが格納されたファイルパス
//
const string CSVReader::DATA_FILE_PATH = "SampleData.txt";