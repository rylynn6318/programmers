#pragma once
#include <string>
#include <vector>
#include <array>
#include <ctime>

using namespace std;

string solution(int a, int b) {
    array<int,12> date = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    string answer = "";
    int day = 0;
    for (int i = 0; i < a-1; i++)
    {
        if (a == 1) break;
        day += date[i];
    }
    day += b;
    if (day % 7 == 1)return "FRI";
    else if (day % 7 == 2) return "SAT";
    else if (day % 7 == 3) return "SUN";
    else if (day % 7 == 4) return "MON";
    else if (day % 7 == 5) return "TUE";
    else if (day % 7 == 6) return "WED";
    else return "THU";
}