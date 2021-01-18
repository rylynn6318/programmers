#pragma once
#include <cmath>
using namespace std;

long long solution(long long n) {    
    auto answer = std::sqrt(n);
    if (answer - static_cast<int>(answer))     
        return -1;    
   
    return pow((answer + 1), 2);
}