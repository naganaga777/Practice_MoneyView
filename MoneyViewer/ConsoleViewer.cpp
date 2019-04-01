//
//ConsoleView�̎����N���X
//

#include "pch.h"
#include  <iostream>
#include "ConsoleViwer.h"
#include "Controller.h"
#include <sstream>
using namespace std;

//
//�W�����͂����Ж���I�����郁�\�b�h
//
CompanyName ConsoleViwer::SelectCompany()
{
    cout << "�ǂ̉�Ђ̏]�ƈ��̏��������m�肽���ł���" << endl;
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
//CompanyA�̏]�ƈ����X�g��\�����郁�\�b�h
//
void ConsoleViwer::DisplayWorkerList(vector<IWorker*> workerList)
{
    cout << "�]�ƈ����X�g���ȉ��ɕ\�����܂�" << endl;
    for (size_t i = 0; i < workerList.size(); i++)
    {
        stringstream sst("");
        sst << "id:" << workerList.at(i)->Id() << ", name:" << workerList.at(i)->Name() << ", money: " << workerList.at(i)->Money();
        cout << sst.str() << endl;
    }
}
//
//���ϒl�̒l��\�����郁�\�b�h
//
void ConsoleViwer::DisplayAverage(int value)
{
    cout << "�������̕��ϒl��" << value << "�~�ł�" << endl;
}




