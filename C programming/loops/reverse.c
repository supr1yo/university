#include<stdio.h>

int main() {
    int n, rev = 0, rem;

    n = 123;

    while(n!=0) {
        rem = n % 10;
        rev = rev * 10 + rem;

        n /= 10;
    }

    printf("%d", rev);
}