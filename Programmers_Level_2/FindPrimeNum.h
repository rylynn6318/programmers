#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int isPrimeNum(int num)
{
	if (num == 1 || num == 0)
		return 0;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}

	return 1;
}

int solution(string numbers) {
	std::unordered_set<int> set;
	std::sort(numbers.begin(), numbers.end());
	do
	{
		for (int i = 1; i < numbers.size() + 1; i++)
		{
			int num = std::stoi(numbers.substr(0, i));
			if (isPrimeNum(num))
				set.insert(num);
		}

	} while (std::next_permutation(numbers.begin(), numbers.end()));


	return set.size();
}