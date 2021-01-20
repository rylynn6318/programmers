#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <bitset>
#include <iterator>
#include <cmath>
using namespace std;

string toNbit(int n, int num)
{                                                                                  
	string s;
	for (int i = n - 1; i >= 0; i--)
	{
		s += to_string(num / (int)pow(2, i));
		if (num / (int)pow(2, i)) 
			num -= (int)pow(2, i);
	}
	return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	vector<string> a;
	vector<string> b;

	for (int i = 0; i < n; i++)
	{
		a.push_back(toNbit(n, arr1[i]));
		b.push_back(toNbit(n, arr2[i]));
	}

	for (int i = 0; i < n; i++)
	{
		string s = "";
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '1' || b[i][j] == '1')
				s += '#';
			else
				s += ' ';
		}
		answer.push_back(s);
	}
	

	return answer;
}