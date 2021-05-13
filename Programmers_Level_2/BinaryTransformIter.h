#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string toBinary(int num)
{
	string s = "";
	while (num > 1)
	{
		s += std::to_string(num % 2);
		num /= 2;
		if (num == 1)
			s += std::to_string(1);
	}
	std::reverse(s.begin(), s.end());
	return s;
}

vector<int> solution(string s) {
	vector<int> answer(2, 0);
	while (true)
	{
		answer[1] += std::count(s.cbegin(), s.cend(), '0');
		answer[0]++;
		s.erase(std::remove(s.begin(), s.end(), '0'), s.end());
		auto after = s.size();
		if (after == 1)
			break;
		s = toBinary(after);
	}

	return answer;
}