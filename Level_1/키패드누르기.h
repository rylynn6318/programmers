#pragma once
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct Location
{
	int x;
	int y;
};

int getDistance(Location a, Location b)
{
	int x = abs(a.x - b.x);
	int y = abs(a.y - b.y);
	return x + y;
}

string solution(vector<int> numbers, string hand) {
	string answer = "";
	Location left = { 0,3 };
	Location right = { 2,3 };
	Location two = { 1,0 };
	Location five = { 1,1 };
	Location eight = { 1,2 };
	Location zero = { 1,3 };
	for (auto n : numbers)
	{
		switch (n)
		{
		case 1: case 4: case 7:
			answer += "L";
			left.x = 0;
			left.y = n / 3;
			break;
		case 3: case 6: case 9:
			answer += "R";
			right.x = 2;
			right.y = n / 3 - 1;
			break;
		case 2:
			if (getDistance(left, two) == getDistance(right, two))
			{
				if (hand == "right")
				{
					answer += "R";
					right = two;
				}
				else
				{
					answer += 'L';
					left = two;
				}
			}
			else if (getDistance(left, two) < getDistance(right, two))
			{
				answer += 'L';
				left = two;
			}
			else
			{
				answer += "R";
				right = two;
			}
			break;
		case 5:
			if (getDistance(left, five) == getDistance(right, five))
			{
				if (hand == "right")
				{
					answer += "R";
					right = five;
				}
				else
				{
					answer += 'L';
					left = five;
				}
			}
			else if (getDistance(left, five) < getDistance(right, five))
			{
				answer += 'L';
				left = five;
			}
			else
			{
				answer += "R";
				right = five;
			}
			break;
		case 8:
			if (getDistance(left, eight) == getDistance(right, eight))
			{
				if (hand == "right")
				{
					answer += "R";
					right = eight;
				}
				else
				{
					answer += 'L';
					left = eight;
				}
			}
			else if (getDistance(left, eight) < getDistance(right, eight))
			{
				answer += 'L';
				left = eight;
			}
			else
			{
				answer += "R";
				right = eight;
			}
			break;
		case 0:
			if (getDistance(left, zero) == getDistance(right, zero))
			{
				if (hand == "right")
				{
					answer += "R";
					right = zero;
				}
				else
				{
					answer += 'L';
					left = zero;
				}
			}
			else if (getDistance(left, zero) < getDistance(right, zero))
			{
				answer += 'L';
				left = zero;
			}
			else
			{
				answer += "R";
				right = zero;
			}
			break;
		}
	}
		return answer;	
}