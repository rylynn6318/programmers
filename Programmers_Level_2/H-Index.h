#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// [3, 0, 6, 1, 5] -> [0, 1, 3, 5, 6]
int solution(vector<int> citations) {
	int answer = 0;
	std::sort(citations.begin(), citations.end());
	for (int i = 0; i <= citations.back(); i++)
	{
		int cnt = 0;
		auto iter = std::for_each(citations.begin(), citations.end(), [&](int a) {
			if (i <= a)
				cnt++;
			});

		if (i <= cnt)
			answer = i;
	}
	return answer;
}