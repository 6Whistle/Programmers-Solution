#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    return accumulate(numbers.begin(), numbers.end(), 45, [](auto a, auto b){   return a - b; });
}