#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Simple Calculator\n");
    printf("Add: %d\n", add(5, 3));
    return 0;
}
