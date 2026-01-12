#include <stdio.h>

int add(int a, int b) {   // Uses return
    return a + b;
}

void display() {          // Uses printf
    printf("This is printf function output.\n");
}

int main() {
    int result = add(5, 10);   
    printf("Returned value from add() = %d\n", result);

    display();   // Prints text directly
    return 0;
}