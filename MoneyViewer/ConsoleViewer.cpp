//
//ConsoleViewの実装クラス
//

#include "pch.h"
#include  <iostream>
#include "ConsoleViwer.h"
#include "Controller.h"
#include <sstream>
using namespace std;

//
//標準入力から会社名を選択するメソッド
//
CompanyName ConsoleViwer::SelectCompany()
{
    cout << "どの会社の従業員の所持金が知りたいですか" << endl;
    cout << "1.CompanyA" << endl;
    cout << "2.Cannon" << endl;
    CompanyName companyName;
    int tmp = 0;
    cin >> tmp;

    companyName= (CompanyName)tmp;
    if (!cin) 
    { 
        cin.clear(); 
        cin.ignore(INT_MAX, '\n');
    }
    return companyName;
}

//
//CompanyAの従業員リストを表示するメソッド
//
void ConsoleViwer::DisplayWorkerList(vector<IWorker*> workerList)
{
    cout << "従業員リストを以下に表示します" << endl;
    for (size_t i = 0; i < workerList.size(); i++)
    {
        stringstream sst("");
        sst << "id:" << workerList.at(i)->Id() << ", name:" << workerList.at(i)->Name() << ", money: " << workerList.at(i)->Money();
        cout << sst.str() << endl;
    }
}
//
//平均値の値を表示するメソッド
//
void ConsoleViwer::DisplayAverage(int value)
{
    cout << "所持金の平均値は" << value << "円です" << endl;
}




