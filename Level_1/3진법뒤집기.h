#pragma once
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int r = 0;
    vector<int> tri;
    while (n>0)
    {
        r = n % 3;
        n /= 3; ;
        tri.push_back(r);        
    }
    int size = tri.size();
    for(int i=0;i<size;i++)
    {
        answer += pow(3, i) * tri.back();   
        tri.pop_back();
    }
    return answer;
}