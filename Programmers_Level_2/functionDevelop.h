#pragma once
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	vector<int> done;
	std::transform(progresses.begin(), progresses.end(), speeds.begin(),
		std::back_inserter(done),
		[](int a, int b)
		{
			return ceil((100 - a) / (double)b);
		}
	);

	int min = done[0];
	int last = 0;
	for (int i = 1; i <= done.size(); i++)
	{
		if (i == done.size())
		{
			answer.push_back(done.size() - last);
			break;
		}
		if (min < done[i])
		{
			answer.push_back(i - last);
			last = i;
			min = done[i];
		}
	}
	return answer;
}