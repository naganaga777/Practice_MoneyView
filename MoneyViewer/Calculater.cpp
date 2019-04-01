//
//Calculaterクラスの実装部
//
#include "pch.h"
#include "Calculater.h" 
#include <vector>
using namespace std;

//
//平均値を計算するメソッド
//
 int Calculater::CalcAverage(const vector<int> in_money)
{
     if (0 == in_money.size())
     {
         return 0;
     }
     int sum = 0;
     for (int i = 0; i < in_money.size(); ++i)
     {
         sum += in_money.at(i);
     }
     return sum / in_money.size();
}
