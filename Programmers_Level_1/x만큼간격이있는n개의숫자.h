#pragma once
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int i = 0;
    while(n--)
    {
        answer.push_back(x + i);
        i += x;
    }
    return answer;
}