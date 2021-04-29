#pragma once
#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
	int n = maps.size() - 1;
	int m = maps[0].size() - 1;

	int dx[] = { 0, 0, 1, -1 };
	int dy[] = { 1, -1, 0, 0 };

	std::queue<std::pair<int, int>> q;
	q.push({ 0,0 });
	while (!q.empty()) {
		for (int i = 0; i < 4; i++)
		{
			int xpos = q.front().first + dx[i];
			int ypos = q.front().second + dy[i];

			if (0 <= xpos && xpos <= n && 0 <= ypos && ypos <= m)
			{
				if (xpos == 0 && ypos == 0) 
					continue;

				if (maps[xpos][ypos] == 1)
				{
					q.push({ xpos,ypos });
					maps[xpos][ypos] = maps[q.front().first][q.front().second] + 1;
				}
			}
		}
		q.pop();
	}
	return maps[n][m] == 1 ? -1 : maps[n][m];
}
