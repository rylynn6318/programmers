#pragma once
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <iostream>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
	vector<int> cnt;
	vector<int> answer;
	map<int, double> map;
	for (int i = 1; i <= N; i++)
		cnt.push_back(std::count(stages.cbegin(), stages.cend(), i));

	for (int i = 1; i <= N; i++)
	{
		int iCnt = count_if(stages.cbegin(), stages.cend(),
			[=](int n) { return n >= i; }
		);
		if (iCnt==0) iCnt = 1;
		map.insert({ i ,cnt[i - 1] / (double)iCnt });
	}
	
	vector<pair<int, double>> copy;
	std::copy(map.begin(), map.end(), std::back_inserter(copy));
	sort(copy.begin(), copy.end(),
		[](pair<int, double> a, pair<int, double> b)->bool {
			if (a.second > b.second)
				return true;
			else if (a.second == b.second)
				return a.first < b.first;
			else
				return false;
		}
	);

	for (auto a : copy)
	{
		answer.push_back(a.first);
		cout << a.first << " " << a.second << endl;
	}

	return answer;
}