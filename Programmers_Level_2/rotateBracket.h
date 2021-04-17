#pragma once
#include <string>
#include <vector>

using namespace std;

bool check(string s)
{
    std::vector<char> c;
    c.push_back(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ']')
        {
            if (c.back() == '[')
                c.pop_back();
        }
        else if (s[i] == '}')
        {
            if (c.back() == '{')
                c.pop_back();
        }
        else if (s[i] == ')')
        {
            if (c.back() == '(')
                c.pop_back();
        }
        else
            c.push_back(s[i]);
    }
    if (c.empty())
        return true;
    else
        return false;

}

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        auto temp = s[0];
        s.erase(s.begin());
        s += temp;
        if (check(s))
            answer++;
    }

    
    return answer;
}