#pragma once
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) { 
    if (arr.size() == 1) return { -1 };
    int min = 2147483647;
    for (auto a : arr)
    {
        if (a < min) min = a;
    }
    arr.erase(find(arr.begin(), arr.end(), min));
    return arr;
}