#pragma once
#include <numeric>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer = { std::gcd(n, m), std::lcm(n, m) };
    
    return answer;
}