#pragma once
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    for (int i = 10; i <= n*10; i *= 10)
    {
        answer += (n % i) / (i / 10);
    }
    return answer;
}