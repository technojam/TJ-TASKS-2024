#include <iostream>
using namespace std;

int range_bitwise_and(int left, int right) {
    //write your code here
}

int main() {
    // Default Test Cases
    int test_cases[][2] = {
        {5, 7},          // Output: 4
        {0, 0},          // Output: 0
        {1, 2147483647}  // Output: 0
    };

    // Run Test Cases
    for (auto &test_case : test_cases) {
        cout << range_bitwise_and(test_case[0], test_case[1]) << endl;
    }

    return 0;
}

// Sample Output:
// 4
// 0
// 0
