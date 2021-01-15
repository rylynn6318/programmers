#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b) return a;
    int min = std::min(a, b);
    int max = std::max(a, b);
    while (min<=max)    
        answer += min++;
    
    return answer;
}