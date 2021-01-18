#pragma once
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

int solution(int n) {  
    if (n == 0) return 0;
    std::vector<int> answer;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            if (i == sqrt(n)) 
                answer.push_back(i);
            else
            {
                answer.push_back(i);
                answer.push_back(n / i);
            }
        }
    }
    return std::accumulate(answer.cbegin(), answer.cend(), 0);
}