#pragma once
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n){ 
    int answer = 0;
    vector<int> arr;
    for (int i = 0; i < n + 1; i++)
    {
        arr.push_back(i);
    }
    arr[1] = 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (arr[i]==0) continue;

        for (int j = 2 * i; j <= n; j += i) {
            arr[j] = 0;
        }
    }

    for (auto a : arr)
        if (a != 0) answer++;

    return answer;
}
