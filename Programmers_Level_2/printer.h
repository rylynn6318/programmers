#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int solution(std::vector<int> priorities, int location) {
	int answer = 1;
	vector<pair<int, int>> pVec;
	for (int i = 0; i < priorities.size(); i++)
	{
		pVec.push_back({ i,priorities[i] });
	}
	while (true)
	{
		if (pVec.begin() == std::max_element(pVec.begin(), pVec.end(),compare))
		{
			if (pVec.front().first == location)
				return answer;

			answer++;
			pVec.erase(pVec.begin());
		}
		else
		{
			pVec.push_back(pVec.front());
			pVec.erase(pVec.begin());
		}
		
	}

	
	return answer;
}