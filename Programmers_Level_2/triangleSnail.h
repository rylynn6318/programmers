#pragma once
#include <string>
#include <vector>
#include <numeric>
using namespace std;


enum Dir
{
	DOWN, RIGHT, UP, LEFT
};
Dir d;

vector<int> solution(int n) {
	vector<int> answer;
	int max = n * (n + 1) / 2;
	vector<vector<int>> arr(n, vector<int>(n, 0));
	int i = 0, j = 0;
	int left = 0, floor = n, right = n, ceil = 0;
	int num = 1;
	int k = 0;
	Dir dir;
	dir = Dir::DOWN;
	bool flag = true;
	while (true)
	{
		
		if (dir == Dir::DOWN)
		{
			arr[i][j] = num;
			if (num == max) break;
			num++;
			if (i == floor - 1)
			{
				dir = Dir::RIGHT;
				left++;
				j++;
			}
			else
				i++;
		}
		else if (dir == Dir::RIGHT)
		{
			arr[i][j] = num;
			if (num == max) break;
			num++;
			if (j == right - 1)
			{
				dir = Dir::UP;
				floor--;
				i--;
			}
			else
				j++;
		}
		else if (dir == Dir::UP)
		{
			arr[i][j] = num;
			if (num == max) break;
			num++;
			if (i == ceil + 1+k)
			{
				dir = Dir::LEFT;
				ceil++;
				k++;
				right--;
				j--;
				i++;
			}
			else
				i--;
		}
		else if (dir == Dir::LEFT)
		{
			arr[i][j] = num;
			if (num == max) break;
			num++;
			if (i == floor - 1)
			{
				dir = Dir::RIGHT;
				j++;
			}
			
			else
			{
				j--;
				i++;
			}
		}
	}
	for (auto ar : arr)
	{
		for (auto a : ar)
		{
			if (a != 0)
				answer.push_back(a);
		}
	}
	return answer;
}