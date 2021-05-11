#pragma once
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits>

using namespace std;

bool check(string from, string to)
{
	int cnt = 0;
	for (int i = 0; i < from.size(); i++)
	{
		if (from[i] != to[i])
			cnt++;
	}
	if (cnt == 1)
		return true;
	else
		return false;
}

int dfs(string begin, string target, vector<string> words)
{
	int min = numeric_limits<int>::max();
	for (int i = 0; i < words.size(); i++)
	{
		int cnt = 0;
		if (!check(begin, words[i]))
			continue;

		std::vector<bool> visited(words.size(), false);
		std::stack<int> stack;
		stack.push(i);
		while (!stack.empty())
		{
			cnt++;
			int num = stack.top();
			stack.pop();
			if (visited[num]) {
				cnt--;
				continue;
			}

			visited[num] = true;
			if (words[num] == target)
			{
				min = std::min(min, cnt);
				break;
			}

			for (int j = 0; j < words.size(); j++)
			{
				if (visited[j])//간 곳 거름
					continue;

				if (!check(words[num], words[j]))
					continue;

				stack.push(j);
			}
		}
	}
	return min;
}

int solution(string begin, string target, vector<string> words) {
	int answer = dfs(begin, target, words);
	if (answer == numeric_limits<int>::max())
		return 0;

	return answer;
}