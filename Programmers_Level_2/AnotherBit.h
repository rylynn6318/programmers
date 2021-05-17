#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bitset>
using namespace std;

vector<long long> solution(vector<long long> numbers) {
	vector<long long> answer;
	for (auto& num : numbers)
	{
		if (num % 2 == 0)
			answer.push_back(num + 1);
		else
		{
			std::bitset<49> bit(num);
			for (int i = 1; i < bit.size(); i++)
			{
				if (bit[i] == 0)
				{
					bit[i] = 1;
					bit[i - 1] = 0;
					answer.push_back(bit.to_ullong());
					break;
				}
			}
		}
	}

	return answer;
}