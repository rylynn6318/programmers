#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    vector<int> answer;
    std::transform(a.cbegin(), a.cend(), b.cbegin(), back_inserter(answer), 
        [](int x, int y) {return x * y; }
    );
    return std::accumulate(answer.cbegin(), answer.cend(), 0);
}