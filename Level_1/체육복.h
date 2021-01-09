#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//auto a = solution(10, {1,2,4,6,9 }, { 1,3,5,10 });
int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer;

	for (int i = 1; i < n+1; i++)
	{
		auto lIter = find(lost.begin(), lost.end(), i);
		auto rIter = find(reserve.begin(), reserve.end(), i);
		if (lIter != lost.end() && rIter != reserve.end())
		{
			lost.erase(lIter);
			reserve.erase(rIter);
		}
	}	
	answer = n - lost.size();
	
	if (lost.empty() || reserve.empty()) return answer;

	for (auto l : lost)
	{
		auto iter1 = find(reserve.begin(), reserve.end(), l-1);
		auto iter2 = find(reserve.begin(), reserve.end(), l+1);
		if (iter1 == iter2) continue;
		else if (iter1 != reserve.end())
		{
			answer++;
			reserve.erase(iter1);		
		}
		else if (iter2 != reserve.end())
		{
			answer++;
			reserve.erase(iter2);
		}
	}
    return answer;
}