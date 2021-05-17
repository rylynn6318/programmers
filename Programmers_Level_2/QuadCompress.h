#pragma once
#include <string>
#include <vector>

using namespace std;
vector<int> answer(2, 0);

void dfs(int x, int y, int size, vector<vector<int>>& arr)
{
	int init = arr[x][y];
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (arr[i][j] != init)
			{
				dfs(x, y, size / 2, arr);
				dfs(x, y + size / 2, size / 2, arr);
				dfs(x + size / 2, y, size / 2, arr);
				dfs(x + size / 2, y + size / 2, size / 2, arr);
				return;
			}
		}
	}

	answer[init]++;
}

vector<int> solution(vector<vector<int>> arr) {

	vector<vector<bool>> isVisited(arr.size(), std::vector<bool>(arr.size()));
	dfs(0, 0, arr.size(), arr);

	return answer;
}