// MoneyViewer.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>
#include "Controller.h"
#include "CSVAccesser.h"
#include "CSVDataObject.h"
#include "ConsoleViwer.h"

#include "companyARepository.h"

int main()
{
    //
    //保存形式は動的に変化しないものとする。
    //
    IAccesser* dataAccesser = CSVAccesser::CreateDataObjects();
    if (NULL == dataAccesser)
    {
        return 0;
    }

    IRepository* repository = NULL;
    while (true)
    {
        CompanyName selectCompay = ConsoleViwer::SelectCompany();

        if (CompanyName::CompanyA == selectCompay)
        {
            repository = new CompanyARepository(dataAccesser->GetDatas());
            break;

        }
        else if (CompanyName::CompanyB == selectCompay)
        {
            cout << "将来実装します。１を入力して下さい" << endl;
        }
        cout << "入力値不正。正しい値を入力してください" << endl;
    }

    Controller controller(dataAccesser, repository);
    controller.AverageProc();

    delete dataAccesser;

};

  