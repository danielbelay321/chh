#include <stdio.h>

void vulnerable_function() {
    char buffer[5];
    printf("Enter your name: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("Welcome, %s\n", buffer);
}

int main() {
    printf("Welcome to the vulnerable program!\n");
    vulnerable_function();
    printf("Exiting...\n");
    return 0;
}
