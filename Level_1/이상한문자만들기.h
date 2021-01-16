#pragma once
#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    bool odd = false;
    bool even = true;
    for (auto& c : s)
    {
        if (c == ' ')
        {
            even = true;
            odd = false;
        }
        else if (even)
        {
            c = toupper(c);         
            even = false;
            odd = true;
        }
        else
        {
            c = tolower(c);
            even = true;
            odd = false;
        }
    }
    return s;
}