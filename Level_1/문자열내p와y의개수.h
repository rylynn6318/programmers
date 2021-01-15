#pragma once
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pCnt = 0;
    int yCnt = 0;
    for (auto c : s)
    {
        if (c == 'P' || c == 'p') pCnt++;
        else if (c == 'Y' || c == 'y') yCnt++;
    }

    return (pCnt == yCnt) ? true : false;
}