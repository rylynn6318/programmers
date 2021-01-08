#pragma once
#include <array>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    array<int, 10> num1 = { 1,2,3,4,5,1,2,3,4,5 };
    array<int, 8> num2 = { 2,1,2,3,2,4,2,5 };
    array<int, 10> num3 = { 3,3,1,1,2,2,4,4,5,5 };

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == num1[i % 10]) cnt1++;
        if (answers[i] == num2[i % 8]) cnt2++;
        if (answers[i] == num3[i % 10]) cnt3++;
    }    

    int max = 0;
    vector<int> answer;
    max = std::max(std::max(cnt1, cnt2), cnt3);
    if (max == cnt1) answer.push_back(1);
    if (max == cnt2)answer.push_back(2);
    if (max == cnt3)answer.push_back(3);
   
    return answer;
}