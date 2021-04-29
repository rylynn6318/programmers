#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	std::map<string, vector<pair<int, int>>> albumMap;
	std::map<string, int> table;
	for (int i = 0; i < genres.size(); i++)
	{
		if (albumMap.find(genres[i]) == albumMap.end())
		{
			albumMap.insert({ genres[i], {{ plays[i],i}} });
			table.insert({ genres[i], plays[i] });
		}
		else
		{
			albumMap[genres[i]].push_back({ plays[i],i });
			table[genres[i]] += plays[i];
		}
	}

	std::vector<std::pair<string, int>> vec(table.begin(), table.end());
	std::sort(vec.begin(), vec.end(), [](std::pair<string, int>& a, std::pair<string, int>& b)->bool {
			return a.second > b.second;
		});


	for (int i = 0; i < vec.size(); i++)
	{
		auto vec2 = albumMap[vec[i].first];
		std::sort(vec2.begin(), vec2.end(), [](std::pair<int,int>&a, std::pair<int, int>& b) {
			if (a.first == b.first)
			{
				return a.second < b.second;
			}
			else
				return a.first > b.first;
			});

		
		for (int i = 0; i < std::min((int)vec2.size(), 2); i++)
		{
			answer.push_back(vec2[i].second);
		}
	}
	

	return answer;
}