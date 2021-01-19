#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    std::transform(arr1.cbegin(), arr1.cend(), arr2.cbegin(), std::back_inserter(answer),
        [](vector<int> a, vector<int> b) 
        { 
            vector<int> sum;
            for (int i = 0; i < a.size(); i++)
                sum.push_back(a[i] + b[i]);
            return sum;
        }
    );
    return answer;
}