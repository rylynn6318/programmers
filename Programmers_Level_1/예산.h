#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;
    std::sort(d.begin(), d.end());
    for (auto m : d)
    {
        sum += m;
        if (sum > budget)
            break;
        answer++;
    }
    return answer;
}