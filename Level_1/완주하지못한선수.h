#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> pMap;

    for (const auto& p : participant)
    {
        if (pMap.find(p) == pMap.end()) // 없을 때
        {
            pMap.insert({ p, 1 });
        }
        else
        {
            pMap.find(p)->second++;
        }
    }

    for (const auto& c : completion)
    {
        pMap.find(c)->second--;
    }

    for (const auto& p : pMap)
    {
        if (p.second == 1)
            return p.first;
    }
}