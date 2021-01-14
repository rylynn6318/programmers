#pragma once
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    const int size = s.length();
    if (size % 2 == 1)
        answer = s.at(size / 2);
    else
    {
        answer = s.at(size / 2 - 1);
        answer += s.at(size / 2);
    }

    return answer;
}