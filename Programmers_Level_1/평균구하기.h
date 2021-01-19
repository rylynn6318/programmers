#pragma once
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {    
    return std::accumulate(arr.cbegin(), arr.cend(), 0) / (double)arr.size();
}