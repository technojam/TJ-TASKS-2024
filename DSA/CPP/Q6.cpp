#include <iostream>
using namespace std;

long long number_spiral(long long y, long long x) {
    //write your code here
}

int main() {
    // Default Test Cases
    long long test_cases[][2] = {
        {2, 3},  // Output: 8
        {1, 1},  // Output: 1
        {4, 2}   // Output: 15
    };

    // Run Test Cases
    for (auto &test_case : test_cases) {
        cout << number_spiral(test_case[0], test_case[1]) << endl;
    }

    return 0;
}

// Sample Output:
// 8
// 1
// 15
