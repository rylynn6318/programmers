#pragma once
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    std::sort(strings.begin(), strings.end(),
        [=](string a, string b)->bool {            
            return (a.at(n) == b.at(n)) ? (a < b) : (a.at(n) < b.at(n));
        }
    );
    return strings;
}