#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto c : s)
    {
        if (c == ' ') answer += ' ';
        else if ('a' <= c && c <= 'z')
        {
            if (c + n > 'z')
                answer += c + n - 'z' + 'a'-1;
            else
                answer += c + n;
        }
        else
        {
            if (c + n > 'Z')
                answer += c + n - 'Z' + 'A'-1;
            else
                answer += c + n;
        }
    }

    return answer;
}