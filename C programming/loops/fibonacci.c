#include <stdio.h>

int fibo(int n) {
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    for(int i=3; i<=n; i++) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1+t2;
    }


}

int main() {
    printf("Fibonaci sreies is 0, 1, ");
    fibo(10);
}