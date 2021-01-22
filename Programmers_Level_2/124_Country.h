#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
	string answer = "";
	int r = 0;
	vector<int> tri;
	while (n > 3)
	{
		if (n % 3 == 0)
		{
			tri.push_back(3);
			n = n / 3 - 1;
		}
		else
		{
			tri.push_back(n % 3);
			n /= 3;
		}
	}
	tri.push_back(n);
	while (!tri.empty())
	{
		int n = tri.back();
		tri.pop_back();
		if (n == 3)
			answer += "4";
		else
			answer += std::to_string(n);
	}
	return answer;
}