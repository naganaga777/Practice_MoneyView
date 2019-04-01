//
//Calculaterクラスの宣言
//

#pragma once
#ifndef CALCULATER_
#define CALCULATER_
#include <vector>
using namespace std;

static class Calculater
{
public:
    //
    //平均値を計算するメソッド
    //
    static int CalcAverage(const vector<int> in_money); 
    
};

#endif // !CALCULATER_
