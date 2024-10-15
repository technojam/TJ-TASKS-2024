#include <stdio.h>

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

long long number_spiral(long long y, long long x) {
    //write your code here
}

int main() {
    // Default Test Cases
    long long test_cases[3][2] = {
        {2, 3},  // Output: 8
        {1, 1},  // Output: 1
        {4, 2}   // Output: 15
    };

    // Run Test Cases
    for (int i = 0; i < 3; i++) {
        printf("%lld\n", number_spiral(test_cases[i][0], test_cases[i][1]));
    }

    return 0;
}

// Sample Output:
// 8
// 1
// 15
