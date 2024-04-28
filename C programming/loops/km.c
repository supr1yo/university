#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


int isKrishnamurthy(int num) {
    int temp = num;
    int sum = 0;

    while (temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    printf("Krishnamurthy numbers between 1 and 100 are:\n");
    for (int i = 1; i <= 100; i++) {
        if (isKrishnamurthy(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
