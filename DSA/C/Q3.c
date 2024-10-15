#include <stdio.h>

void searchRange(int nums[], int size, int target, int result[]) {
   //write your code here
}

int main() {
    int nums[] = {5,7,7,8,8,10};
    int target = 8;
    int result[2];
    searchRange(nums, 6, target, result);
    printf("[%d, %d]\n", result[0], result[1]);
    return 0;
}
