#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int solution(std::vector<int> absolutes, std::vector<bool> signs) {
	std::vector<int> answer;
	std::transform(absolutes.begin(), absolutes.end(), signs.begin(), std::back_inserter(answer), [&](int a, bool b) {
		if (b)
			return a;
		else
			return -a;
		});

	return std::accumulate(answer.cbegin(), answer.cend(), 0);
}