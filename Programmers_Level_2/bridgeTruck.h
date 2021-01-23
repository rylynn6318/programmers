#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

auto moveTruck(vector<int>& bridge)->void
{
    for (int i = 0; i < bridge.size() - 1; i++)
    {
        bridge[i] = bridge[i + 1];
    }
    bridge[bridge.size() - 1] = 0;
}
//다리를 지나는 트럭
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int now = 0;
    vector<int> bridge(bridge_length);

    while (true) 
    {
        moveTruck(bridge);
        now = accumulate(bridge.cbegin(), bridge.cend(), 0);
        if (truck_weights.empty()) {}
        else if (now + truck_weights.front() <= weight)
        {
            bridge[bridge_length - 1] = truck_weights.front();
            truck_weights.erase(truck_weights.begin());
        }
        answer++;

        if (accumulate(bridge.cbegin(), bridge.cend(), 0) == 0)
            break;
    }
    return answer;
}