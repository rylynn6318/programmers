#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int start, end, size;
    for (auto c : commands)
    {
        start = c[0];
        end = c[1];
        size = c[2];
        vector<int> tmp;
        std::copy(array.begin() + start-1, array.begin() + end, std::back_inserter(tmp));
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp.at(size-1));
    }

    return answer;
}