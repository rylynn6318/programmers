#pragma once
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	if (s.size() != 4 && s.size() != 6) return false;
	for (auto c : s)
		if (isalpha(c)) return false;
	return true;
}