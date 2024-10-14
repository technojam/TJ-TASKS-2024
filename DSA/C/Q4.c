#include <stdio.h>

int compress(char* chars, int size) {
    //write your code here
}

int main() {
    char chars[] = {'a','a','b','b','c','c','c'};
    int size = sizeof(chars) / sizeof(chars[0]);
    int newSize = compress(chars, size);
    printf("New length: %d\n", newSize);
    for (int i = 0; i < newSize; i++) {
        printf("%c ", chars[i]);
    }
    printf("\n");
    return 0;
}
