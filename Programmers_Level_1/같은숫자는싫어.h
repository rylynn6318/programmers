#pragma once
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		if (arr[i] != arr[i + 1])
			answer.push_back(arr[i]);
	}
	answer.push_back(arr[arr.size() - 1]);
	
	//알고리즘헤더에서 인접사항 중복제거 unique
	//arr.erase(unique(arr.begin(), arr.end()), arr.end());

	return answer;
}