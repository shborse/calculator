#include <stdio.h>

int add(int a, int b) {
    	return a + b;
}
int multiply(int a, int b) {
    	return a * b;
}
int divide(int a, int b) {
    return a / b;
}
int main() {
   	 printf("Final  Calculator\n");
   	 printf("Add: %d\n", add(5, 3));
	printf("Multiply: %d\n", multiply(5, 3));
	printf("Divide: %d\n", divide(5, 3));
   	 return 0;
}

