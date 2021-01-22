#pragma once
#include <string>
#include <vector>

using namespace std;
int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	vector<char> sList;
	string sk = skill;
	while (!skill.empty())
	{
		sList.push_back(skill.back());
		skill.pop_back();
	}

	bool flag = true;

	for (auto s : skill_trees)
	{
		auto sl = sList;
		for (auto c : s)
		{
			flag = true;
			if (sk.find(c) == std::string::npos) 
				continue; 
			else
			{
				if (sl.back() == c)
				{
					sl.pop_back();
				}
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (flag) answer++;
	}

	return answer;
}