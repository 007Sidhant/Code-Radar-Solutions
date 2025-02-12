#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // If the number is divisible by any number other than 1 and itself, it is not prime
    }
    return true; // The number is prime if no divisors were found
}

int main() {
    int number;
    printf("");
    scanf("%d", &number);
    
    if (isPrime(number)) {
        printf("Prime", number);
    } else {
        printf("Not Prime", number);
    }
    
    return 0;
}
