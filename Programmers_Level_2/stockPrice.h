#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
//[1, 2, 3, 2, 3] -> [4, 3, 1, 1, 0]
vector<int> solution(vector<int> prices) {
	//vector<int> answer;
	//bool flag = true;
	//for (int i = 0; i < prices.size(); i++)
	//{
	//	flag = true;
	//	for (int j = i+1; j < prices.size(); j++)
	//	{
	//		if (prices[i] > prices[j])
	//		{
	//			flag = false;
	//			answer.push_back(j - i);
	//			break;
	//		}
	//	}
	//	if (flag)
	//	{
	//		answer.push_back(prices.size() - (i+1));
	//	}
	//}
	//return answer;
	vector<int> answer(prices.size());
	stack<int> s;
	int size = prices.size();
	for (int i = 0; i < size; i++) {
		while (!s.empty() && prices[s.top()] > prices[i]) {
			answer[s.top()] = i - s.top();
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		answer[s.top()] = size - s.top() - 1;
		s.pop();
	}
	return answer;
}
	