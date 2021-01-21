#pragma once
#include <vector>
#include <cmath>
//1장 2, 3번 최대공약수, 최소공배수
//유클리드 호제법
//gcd(a,0) = a
//gcd(a,b) = gcd(b, a mod b )
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

//최소공배수 공식 = 절대값 / 최소공약수
int lcm(int a, int b)
{
	int h = gcd(a, b);
	return h ? (a * (b / h)) : 0;
}

std::vector<int> solution(int a, int b)
{
	return { gcd(a,b), lcm(a,b) };
}