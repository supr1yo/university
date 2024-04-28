#include <stdio.h>

// fibonacci
int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibo(n-1) + fibo(n-2);
}

// factorial
int fact(int n) {
    if (n == 0 || n == 1) return 1;

    return n * fact(n - 1);
}

// prime

int prime(int n) {
    if()
}



int main() {

    for (int i = 0; i < 12; i++) {
      printf("%d ", fibo(i));
   }

   printf("%d", fact(5));

    return 0;

}