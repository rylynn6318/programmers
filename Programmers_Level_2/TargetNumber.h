#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void recurse(int index, vector<int> numbers, const int& target, int& cnt, int sum)
{
	if (index == numbers.size())
	{
		if (sum == target)
			cnt++;
		return;
	}

	recurse(index + 1, numbers, target, cnt, sum + numbers[index]);
	recurse(index + 1, numbers, target, cnt, sum - numbers[index]);
}

int solution(vector<int> numbers, int target) {
	int cnt = 0;
	recurse(0, numbers, target, cnt, 0);

	return cnt;
}