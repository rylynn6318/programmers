#pragma once
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int evenCheck(int num)
{
    if (static_cast<int>(std::sqrt(num)) * static_cast<int>(std::sqrt(num)) == num)
        return -num;
    else
        return num;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++)
    {
        answer += evenCheck(i);
    }

    return answer;
}