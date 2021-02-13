#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> index;
    set<string> key;

    for_each(clothes.begin(), clothes.end(), [&](vector<string> v) {
        if (index.find(v[1]) == index.end()) {
            index.insert({ v[1], 1 });
            key.insert(v[1]);
        }
        else
            index[v[1]]++;
        });

    for_each(key.begin(), key.end(), [&](string n) {
        answer *= (index[n] + 1);
        });

    return answer - 1;
}
