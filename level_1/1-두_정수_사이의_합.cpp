#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    return (long long)(a + b) * (abs(a - b) + 1) >> 1;
}
