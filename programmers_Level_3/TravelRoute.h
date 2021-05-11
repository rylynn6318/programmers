#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int maxNum = 0;

void dfs(string start,
	vector<vector<string>>& tickets,
	vector<bool>& visit,
	vector<string>& answer,
	vector<string>& temp, 
	int cnt)
{
	temp.push_back(start);

	if (maxNum < cnt)
	{
		maxNum = cnt;
		answer = temp;
	}

	for (int i = 0; i < tickets.size(); i++)
	{
		if (start == tickets[i][0] && !visit[i])
		{
			visit[i] = true;
			dfs(tickets[i][1], tickets, visit, answer, temp, cnt + 1);
			visit[i] = false;
		}
	}
	temp.pop_back();
}

vector<string> solution(vector<vector<string>> tickets) {
	int cnt = 0;
	vector<string> answer;
	vector<string> temp;
	vector<bool> visit(tickets.size(), false);
	std::sort(tickets.begin(), tickets.end());

	dfs("ICN", tickets, visit, answer, temp, cnt);
	return answer;
}