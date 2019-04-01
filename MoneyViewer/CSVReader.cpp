#include "pch.h"
#include <fstream>
#include <string>
#include "CSVReader.h"
//#include "CSVRow.h"

using namespace std;
//
//�R���X�g���N�^
//

CSVReader::CSVReader()
{
}

//
//�f�X�g���N�^
//
CSVReader::~CSVReader()
{
}

//
//CSV�̓ǂ��vector�ɂP�s���ۑ����ĕԂ�
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
//�f�[�^���i�[���ꂽ�t�@�C���p�X
//
const string CSVReader::DATA_FILE_PATH = "SampleData.txt";