#pragma once
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> ans;
    while (n > 0)
    {
        ans.push_back(n % 10);
        n /= 10;
    }

    sort(ans.begin(), ans.end());
    int i = 1;
    for (auto a : ans)
    {
        answer += a * i;
        i *= 10;
    }
    return answer;
}