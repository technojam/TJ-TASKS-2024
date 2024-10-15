#include <stdio.h>

int range_bitwise_and(int left, int right) {
    
}

int main() {
    // Default Test Cases
    int test_cases[3][2] = {
        {5, 7},          // Output: 4
        {0, 0},          // Output: 0
        {1, 2147483647}  // Output: 0
    };

    // Run Test Cases
    for (int i = 0; i < 3; i++) {
        printf("%d\n", range_bitwise_and(test_cases[i][0], test_cases[i][1]));
    }

    return 0;
}

// Sample Output:
// 4
// 0
// 0
