#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
//[1, 2, 3, 9, 10, 12]	7
int solution(vector<int> scoville, int K) {
	int answer = 0;
    priority_queue<int, vector<int>, greater<int> > queue(scoville.begin(), scoville.end());
    while (queue.size() > 1 && queue.top() < K) {
        int first = queue.top();
        queue.pop();
        int second = queue.top();
        queue.pop();
        queue.push(first + (second * 2));
        answer++;
    }
    if (queue.top() < K)    return -1;
    return answer;
}