#pragma once
#include <numeric>
#include <cmath>
using namespace std;

long long solution(int w, int h) {
    return (long long)w*h -( w + h - std::gcd(w, h));
}

